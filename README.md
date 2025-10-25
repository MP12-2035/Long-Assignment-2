# 🌐 SocialNet Simulator  
**COL106 — Long Assignment 2**
Samridhi Roy, 2024MT10673

### 🏗️ Overview
SocialNet is a command-line simulator of a basic social network backend.  
It demonstrates the use of **AVL Trees** and **Graphs** for efficient data organization and traversal.

Each user is represented as a vertex in a graph, and friendships are bidirectional edges.  
Each user’s posts are stored in an AVL Tree, sorted by creation time.

---

### ⚙️ Features
#### 👥 Social Network Operations
| Command | Description |
|----------|-------------|
| `ADD USER <username>` | Adds a new user to the network. |
| `ADD FRIEND <username1> <username2>` | Creates a bidirectional friendship. |
| `LIST FRIENDS <username>` | Displays all friends alphabetically. |
| `SUGGEST FRIENDS <username> <N>` | Suggests up to N new friends (friends-of-friends) ranked by mutual friends. |
| `DEGREES OF SEPARATION <u1> <u2>` | Returns the shortest friendship path length between two users, or `-1` if no path exists. |

#### 📝 User Content Operations
| Command | Description |
|----------|-------------|
| `ADD POST <username> "<post content>"` | Adds a new post for the user. |
| `OUTPUT POSTS <username> <N>` | Displays the most recent N posts (use `-1` for all posts). |

> ⚠️ Usernames and post content are **case-insensitive**.

---

### 🗂️ Project Structure
socialnet/
├── main.cpp # Entry point, reads and executes commands
├── avl_tree.hpp # Implements AVL Tree for user posts
├── graph.hpp # Implements undirected graph for friendships
├── user.hpp # Defines the User class
├── social_network.hpp # Integrates users, graph, and command execution
├── utils.hpp # Helper utilities (string ops, parsing)
├── compile.sh # Build script
└── README.md # Documentation
