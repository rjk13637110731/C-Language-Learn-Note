class Police:
    """警察类"""

    def __init__(self, name, age, hit_points):
        self.name = name
        self.age = age
        self.hit_points = hit_points

    def catch(self):
        """抓小偷"""
        self.hit_points = self.hit_points + 100

    def smoking(self):
        """抽烟"""
        self.hit_points = self.hit_points - 50

    def shoot(self, user):
        """开枪"""
        user.hit_points = user.hit_points - 100
        self.hit_points = self.hit_points - 10


# (name = "李国良",age = 22, hit_points=100)
p1 = Police("李国良", 22, 1000)
p2 = Police("韩超", 22, 200)
p3 = Police("邓新程", 22, 8000)

p1.shoot(p3)
print(p1.hit_points)  # 990
print(p3.hit_points)  # 7900

p3.shoot(p1)
print(p1.hit_points)  # 890
print(p3.hit_points)  # 7890
