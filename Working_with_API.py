## Retrieve the /r/python subreddit's top posts for the past day.

headers = {'Authorization': 'bearer 13426216-4U1ckno9J5AiK72VRbpEeBaMSKk', "User-Agent": "Dataquest/1.0"}
params = {'t': 'day'}
response = requests.get("https://oauth.reddit.com/r/python/top", headers=headers, params=params)
python_top = response.json()

## Explore the python_top dictionary, extract the list containing all of the posts, and assign it to python_top_articles. Find the post with the most upvotes.

python_top_articles = python_top['data']['children']
sorter = sorted(python_top_articles, key=lambda k: k['data']['ups'], reverse=True)
most_upvoted = sorter[0]['data']['id']

## Now, when  I have the ID for the most upvoted post, I can retrieve the comments on it using the /r/{subreddit}/comments/{article} endpoint.
headers = {'Authorization': 'bearer 13426216-4U1ckno9J5AiK72VRbpEeBaMSKk', "User-Agent": "Dataquest/1.0"}
response = requests.get('https://oauth.reddit.com/r/python/comments/4b7w9u', headers=headers)
comments = response.json()

## Find the most upvoted top-level comment in comments.
clear_com = comments[1]['data']['children']
sorter = sorted(clear_com, key=lambda k: k['data']['ups'], reverse=True)
most_upvoted_comment = sorter[0]['data']['id']

## Make a POST request to the /api/vote endpoint to upvote the most upvoted comment from the last screen.
headers = {'Authorization': 'bearer 13426216-4U1ckno9J5AiK72VRbpEeBaMSKk', "User-Agent": "Dataquest/1.0"}
params = {'id': 'd16y4ry', 'dir': 1}

response = requests.post('https://oauth.reddit.com/api/vote', headers=headers, json=params)
status = response.status_code

