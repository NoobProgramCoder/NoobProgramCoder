from ast import While
from os import system
import pygame,sys
from pygame.locals import*

pygame.init()

FPS = 30
fpsClock = pygame.time.Clock()

DISPLAY = pygame.display.set_mode((500,650),0,35)


pygame.display.set_caption('Animation by aan')

white= (0,0,0)
fiImg = pygame.image.load('heart.png')
fix = 10
fiy = 10
direction = 'right'


while True :
        DISPLAY.fill(white)

        if direction == 'right':
            fix += 5
            if fix ==280:
                direction = 'down'

            elif direction == 'down':
                         fiy += 5 
        if fiy ==220:
         direction ='left'
              
        elif direction == 'left':
                                                fix -=5 
        if fix == 10:
                                                      direction = 'up' 
        elif direction == 'up':
                                                                      fiy -= 5 
        if fiy == 10:
                                                                             direction = 'right'

                                                                             DISPLAY.blit(fiImg,(fix,fiy))
                                                                             for event in pygame.event.get():
                                                                                 if event.type == QUIT :
                                                                                     pygame.quit()
                                                                                     sys.exit()

          
          
          
                                                                             pygame.display.update()
          
          
                                                                             fpsClock.tick (FPS)  