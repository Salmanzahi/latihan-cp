import turtle

# Membuat objek turtle
t = turtle.Turtle()

# Mengatur kecepatan turtle
t.speed(10)

# Mengatur warna turtle
t.color("red")

# Menggambar spiral
for i in range(100):
    t.forward(i)
    t.right(144) # Sudut untuk membuat spiral

# Menutup jendela turtle saat di klik
turtle.done()
