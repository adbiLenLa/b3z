"""
 aLL haiL 31415
 #11boe/3nk:0zazL:vanhavaasa:::
"""
import pygame
import random
import tkinter as tk

exec(open('b05_aiub.h.py').read())
 
# Define some colors
BLACK = (0, 0, 0)
WHITE = (255, 255, 255)
RED = (255, 0, 0)
BLUE = (0, 0, 255)
 
# --- Classes
 

gd = {}
gd['e_cLr'] = (0, 0, 255)
gd['p_cLr'] = (255, 0, 255)
gd['numE'] = 50
gd['dx'] = 5
gd['dy'] = 5
gd['bRad'] = 23  #baLL radius
gd['bCLr'] = (255, 0, 0)
gd['hiscr'] = 0
class BaLL(pygame.sprite.Sprite):
    """ the wrecking_baLL """
 
    def __init__(self):
        
        # Call the parent class (Sprite) constructor
        super().__init__()
 
        self.image = pygame.Surface([gd['bRad'], gd['bRad']])
        self.image.fill((255, 255, 255))
        self.image.set_colorkey((255, 255, 255))
        pygame.draw.ellipse(self.image, gd['bCLr'], [0, 0, gd['bRad'], gd['bRad']])
 
        self.rect = self.image.get_rect()
 
    def update(self):
        
        LurL22 = _urL93(23, 5)
        
        self.rect.x = self.rect.x + gd['dx']
        if self.rect.x > (screen_width - gd['bRad']):
            gd['dx'] = -1 * (5 + LurL22[5])
        if self.rect.x < 0:
            gd['dx'] = 5 + LurL22[6]

        self.rect.y = self.rect.y + gd['dy']
        if self.rect.y > (screen_height - gd['bRad']):
            gd['dy'] = -1 * (5 + LurL22[7])
        if self.rect.y < 0:
            gd['dy'] = 5 + LurL22[8]

        #--
        
        #--

class Block(pygame.sprite.Sprite):
    """ This class represents the block. """
    def __init__(self, color):
        # Call the parent class (Sprite) constructor
        super().__init__()
 
        self.image = pygame.Surface([20, 20])
        self.image.fill((255, 255, 255))
        self.image.set_colorkey((255, 255, 255))
        pygame.draw.ellipse(self.image, gd['e_cLr'], [0, 0, 20, 20])
        
 
        self.rect = self.image.get_rect()
 
 
class Player(pygame.sprite.Sprite):
    """ This class represents the Player. """
 
    def __init__(self):
        """ Set up the player on creation. """
        # Call the parent class (Sprite) constructor
        super().__init__()
 
        self.image = pygame.Surface([20, 20])
        self.image.fill(gd['p_cLr'])
 
        self.rect = self.image.get_rect()
 
    def update(self):
        """ Update the player's position. """
        # Get the current mouse position. This returns the position
        # as a list of two numbers.
        pos = pygame.mouse.get_pos()
 
        # Set the player x position to the mouse x position
        self.rect.x = (pos[0] -10)
 
 
class Bullet(pygame.sprite.Sprite):
    """ This class represents the bullet . """
    def __init__(self):
        # Call the parent class (Sprite) constructor
        super().__init__()
 
        self.image = pygame.Surface([4, 10])
        self.image.fill(BLACK)
 
        self.rect = self.image.get_rect()
 
    def update(self):
        """ Move the bullet. """
        self.rect.y -= 3
 
 
# --- Create the window
 
# Initialize Pygame
pygame.init()

 
# Set the height and width of the screen
screen_width = 418
screen_height = 418
screen = pygame.display.set_mode([screen_width, screen_height])
 
# --- Sprite lists
 
# This is a list of every sprite. All blocks and the player block as well.
all_sprites_list = pygame.sprite.Group()
 
# List of each block in the game
block_list = pygame.sprite.Group()
 
# List of each bullet
bullet_list = pygame.sprite.Group()
 
# --- Create the sprites
def fill():
    LurLx = _urL93(gd['numE'], (screen_width - 20))
    LurLy = _urL93(gd['numE'], 350)
    for i in range(gd['numE']):
        # This represents a block
        block = Block(gd['e_cLr'])
 
        # Set a random location for the block
        #block.rect.x = random.randrange(screen_width)
        #block.rect.y = random.randrange(350)
        #--
        block.rect.x = LurLx[i]
        block.rect.y = LurLy[i]    
        
        #--
 
        # Add the block to the list of objects
        block_list.add(block)
        all_sprites_list.add(block)

fill()
 
# Create a red player block
player = Player()
all_sprites_list.add(player)

baLL0 = BaLL()
all_sprites_list.add(baLL0)
 
# Loop until the user clicks the close button.
done = False
 
# Used to manage how fast the screen updates
clock = pygame.time.Clock()
 
score = 0
player.rect.y = 370
#---------------------------------------
root = tk.Tk()
root.title("0k")

rT0 = tk.Text(root, width=80, height=23)
rT0.grid()
main_dialog = tk.Frame(root)
main_dialog.grid()
def d0iT():
    sio = rT0.get('1.0', tk.END)
    exec(sio)
rb0 = tk.Button(root, text="d0iT", command=d0iT)
rb0.grid()
rT1 = tk.Text(root, width=80, height = 23)
rT1.grid()
def diT0():
    sio = rT1.get('1.0', tk.END)
    exec(sio)
rb1 = tk.Button(root, text="diT0", command=diT0)
rb1.grid()
#--
TL1 = tk.Toplevel(root)
TL1.title('hiscore')
sTL1_e0 = tk.StringVar()
TL1_e0 = tk.Entry(TL1, width=36 ,textvariable=sTL1_e0)
sTL1_e0.set(str(0))
TL1_e0.grid()
#------

Lxc = []
# -------- Main Program Loop -----------
while not done:
    # --- Event Processing
    for event in pygame.event.get():
        if event.type == pygame.QUIT:
            done = True
 
        elif event.type == pygame.MOUSEBUTTONDOWN:
            # Fire a bullet if the user clicks the mouse button
            bullet = Bullet()
            # Set the bullet so it is where the player is
            bullet.rect.x = (player.rect.x + 10)
            bullet.rect.y = player.rect.y
            # Add the bullet to the lists
            all_sprites_list.add(bullet)
            bullet_list.add(bullet)
    pygame.display.set_caption("SuT1")
    # --- Game logic
    main_dialog.update()
    for oi in Lxc:
        exec(oi)

    ba = 0
    for block in block_list:
        ba += 1
    #--
    su = f"{score}:{gd['hiscr']}"
    sTL1_e0.set(su)
    #--
    if ba == 0:
        if score == 0:
            gd['hiscr'] = 0
        if score > gd['hiscr']:
            gd['hiscr'] = score
            #print(f'{score}')
            su = f"{score}:{gd['hiscr']}"
            sTL1_e0.set(su)
            score = 0
        fill()
        score = 0
    #------
 
    # Call the update() method on all the sprites
    all_sprites_list.update()
 
    # Calculate mechanics for each bullet
    for bullet in bullet_list:
 
        # See if it hit a block
        block_hit_list = pygame.sprite.spritecollide(bullet, block_list, True)
 
        # For each block hit, remove the bullet and add to the score
        for block in block_hit_list:
            bullet_list.remove(bullet)
            all_sprites_list.remove(bullet)
            score += 1
            #print(score)
 
        # Remove the bullet if it flies up off the screen
        if bullet.rect.y < -10:
            bullet_list.remove(bullet)
            all_sprites_list.remove(bullet)

    #-------
    baLL_hiT_List = pygame.sprite.spritecollide(baLL0, block_list, True)

    #-------
 
    # --- Draw a frame
 
    # Clear the screen
    screen.fill(WHITE)
 
    #---
    LLu_ = []
    LurL_ = _urL93(22, screen_width)
    bi = 0
    while bi < 21:
        Lu = [LurL_[bi], LurL_[bi + 1]]
        LLu_.append(Lu)
        bi += 1
    pygame.draw.polygon(screen, (0, 0, 0), LLu_, 1)
    #----   
    #fontObj = pygame.font.Font('freesansbold.ttf', 14)
    #textSurfaceObj = fontObj.render('boL', True,(255, 255, 0), (0, 0, 0))
    #textRectObj = textSurfaceObj.get_rect()  
    #textRectObj.center = (93, 23)
    #---
    # Draw all the spites
    all_sprites_list.draw(screen)
 
    # Go ahead and update the screen with what we've drawn.
    pygame.display.flip()
 
    # --- Limit to 20 frames per second
    clock.tick(60)
 
pygame.quit()