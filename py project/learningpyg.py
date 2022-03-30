import pygame, sys
from pygame.locals import*
pygame.init()



disp = pygame.display.set_mode((400,500))
 
pygame.display.set_caption('Game by aan')
while True:
    for event in pygame.event.get():
        if event.type == QUIT:
            pygame.quit()
            sys.exit
            pygame.display.update()


