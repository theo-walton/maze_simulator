# raycast_basic
pretty bad project for my school... I will remake it someday lol

![alt text](https://raw.githubusercontent.com/theo-walton/raycast_basic/master/wolfim)

lots of bad decisions were made in this project, for example I opted to define each wall as 2 2D points.
While not bad, I didn't make use of any line-ray intersection formulas and just incremented the ray in small amounts.
The game also has frame based timing not clock based.
The wall intersection check actually is hypot(wallstart - playerpos, wallend - playerpos) < delta...
