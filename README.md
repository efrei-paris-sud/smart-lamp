# smart-lamp

# Contributors
SUN Yudong     yudong.sun@efrei.net <br>
KANG Jianyi    jianyi.kang@efrei.net <br>
MIRI Kamal     kamal.miri@efrei.net  

# 1. Background Problems 
Smart Lighting: A Very Brief History of Light 

https://www.smartenlight.com/introduction-to-smart-lighting-a-very-brief-history-of-light/ 

 

For common lamps, there are several problems.  

 

Firstly, the common lamps need people’s physical control. Such as turn on, turn off and adjust the light power. Secondly, the adjustment by people always means unsuitable. For example, the light power can be turned to be too bright or too dark. Sometimes people may forget to turn it on or off.  Too bright means energy waste, and too dark may cause eye problem to users. 

# 2. Ideas 

We want to develop a smart lamp, solve all these problems. The ideas are following. 

 

2.1 Easy to Use 

Our smart lamp should be very easy to use. The users don’t need to do any operation for the lamps. It can detect people go in to this room or go out of this room. Then turn the lamp on or off. It can also detect the lightness of the room. Then adjust the brightness automatically. It can be very easy for people to use. 

 

2.2 Save Energy 

As a result of operating automatically, this lamp can avoid many energies waste condition. For example, people may forget turn off the light when he come out for an urgent thing. When one is focusing on his work, he may forget the time and maybe it’s already in the morning, but the light still turned on. 

# 3. Project System Architecture Design 
![](https://github.com/kangjy123k/react-jianyi/blob/master/project%20architecture.png)
# 4. Difficulty 

 Compare to the people sensor part, it can be easier to figure the light sensor part out. It’s very hard to detect whether a people go in or go out. Nowadays there are few solutions for this kind of detection. 

 

For example, if we put a pressure sensor near the door floor, (Don’t think about the possibility of a person may not step on the sensor area) then we can infer a person is come into this room by pressure. But how can we know if there is a new pressure from the sensor, that will mean a new person is coming in or the same person is leaving? 

 

And another solution for this problem: we put a weight sensor in the whole room. If the weight is bigger than setting value, it means that someone come into this room. But the cost is too high for a whole room sensor. Also, the protection cost can be another big amount of money. 

 

The difficulty is, our team should find out a solution that can not only solve this problem, but also with a low cost. 
