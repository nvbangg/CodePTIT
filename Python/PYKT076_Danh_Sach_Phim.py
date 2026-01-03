from datetime import datetime

n, m = map(int, input().split())
genre = []
for _ in range(n):
    genre.append(input().strip())

List_film = []
idx = 0
for _ in range(m):
    idx += 1
    id_genre = input().strip()
    date = input().strip()
    name_film = input().strip()
    num_episodes = int(input().strip())
    film_id = f"P{idx:03d}"
    genre_film = genre[int(id_genre.replace('TL', '')) - 1]
    List_film.append((film_id, genre_film, date, name_film, num_episodes))


List_film = sorted(List_film, key=lambda x : (datetime.strptime(x[2], '%d/%m/%Y'), x[3]))

for item in List_film:
    print(*item)