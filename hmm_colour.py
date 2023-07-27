import sys
class Colors:
    HEADER = '\033[95m'
    OKBLUE = '\033[94m'
    OKGREEN = '\033[92m'
    WARNING = '\033[93m'
    FAIL = '\033[91m'
    ENDC = '\033[0m'

    def disable(self):
        self.HEADER = ''
        self.OKBLUE = ''
        self.OKGREEN = ''
        self.WARNING = ''
        self.FAIL = ''
        self.ENDC = ''
                                    # Prints to terminal
        print (Colors.FAIL + "This is the sample text..." + Colors.ENDC)     
                                            # Handles text without color code in file.  
        orig_stdout = sys.stdout
        f = open('out.txt', 'a')
        sys.stdout = f
        with open('out.txt', 'w') as f:
        print (color.FAIL + "This is the sample text..." + color.ENDC)

color = Colors()
color.disable()
