import sys


class Lexer:


    def __init__(self):
        print 'Beginning lexical analysis'
        
        # Read in file and cleanup
        filename = open(sys.argv[1], 'r')
        lines = filename.readlines()
        for i in lines:
            print i.strip('\n').strip('\t').strip(' ').split(' ')


    #def get_ggtext():
        #return self.filename[self.ggtext_idx]


    #def lex(self):
        #print self.filename.read()


if __name__ == '__main__':
    Lexer().get_ggtext()
