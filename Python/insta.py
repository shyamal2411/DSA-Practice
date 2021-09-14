import instaloader

loader = instaloader.Instaloader()

username = "yourUsername"
password = "example"

loader.login(username, password)

profile = instaloader.Profile.from_username(loader.context, username)

follower_list = []
following_list = []

for follower in profile.get_followers():
    follower_list.append(follower.username)

for followee in profile.get_followees():
    following_list.append(followee.username)

print("These assholes don't follow you back.")
print("It's time to unfollow them.")

for followee in following_list:
    if followee not in follower_list:
        print(followee)
