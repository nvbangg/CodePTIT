from flask import Flask, request
from flask_restful import Api, Resource

app = Flask(__name__)
api = Api(app)

books = [
    {"id": 1, "title": "…", "author":"…"},
    # …
]

class Book(Resource):
    def get(self, book_id):
        book = next((b for b in books if b["id"]==book_id), None)
        if book:
            return book, 200
        return {"message": "Book not found"}, 404

    def delete(self, book_id):
        global books
        books = [b for b in books if b["id"] != book_id]
        return {"message": "Book deleted"}, 200

    def put(self, book_id):
        data = request.get_json()
        book = next((b for b in books if b["id"]==book_id), None)
        if book:
            book.update(data)
            return book, 200
        return {"message": "Book not found"}, 404

class BookList(Resource):
    def get(self):
        return books, 200

    def post(self):
        data = request.get_json()
        books.append(data)
        return data, 201

api.add_resource(BookList, '/books')
api.add_resource(Book, '/books/<int:book_id>')

if __name__ == '__main__':
    app.run(debug=True)
