import cv2 as cv
from moviepy.editor import *
from playsound import playsound




createMp3= open("selim.mp4","w+")
createMp3.close
video = cv.VideoCapture("./photos/catvid.mp4")
videoPath = "./photos/catvid.mp4"
mp3Path =  "./selim.mp3"

cacheClip = VideoFileClip(videoPath)
cacheAudio = cacheClip.audio

cacheAudio.write_audiofile(mp3Path)

cacheClip.close
cacheAudio.close




playsound("selim.mp3",False)
while (True):
    test, frames = video.read()
    cv.imshow("Video" ,frames)
    if cv.waitKey(20) & 0xFF==ord("d"):
        break
video.release()
cv.destroyAllWindows()