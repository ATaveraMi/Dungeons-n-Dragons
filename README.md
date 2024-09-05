# Dungeons & Dragons Game

Welcome to the Dungeons & Dragons game implemented in C++. This game allows players to create a character, explore dungeons, and engage in battles with randomly selected monsters. The game involves elements like spells, dungeons, and monster encounters, simulating a thrilling D&D-like adventure.

## Features

- **Character Creation**: Players can create a character by choosing from different classes: Human, Dwarf, or Elf.
- **Random Monster Selection**: Monsters are randomly chosen from a list of monsters loaded from a CSV file.
- **Dungeon Exploration**: Players can explore dungeons where they'll encounter monsters to fight.
- **Combat System**: Turn-based battle system where players and monsters take turns attacking. The player can also use spells to heal or damage enemies.
- **Spells**: Players have access to a list of spells loaded from a CSV file, which can be used during combat.

## Game Flow

1. **Load Game Files**: The game loads monster data, dungeon data, and spell data from CSV files.
2. **Character Creation**: Players create their character, choosing a race (Human, Dwarf, or Elf), and set starting stats.
3. **Dungeon Exploration**: Players enter a randomly selected dungeon, where they will face a monster.
4. **Battle**: Players engage in turn-based combat with the monster. They can attack using a dice roll, or use spells to gain an advantage.
5. **Victory or Defeat**: The player either defeats the monster, earning the chance to recover health, or is defeated, ending the game.

## How to Play

1. Run the game, and it will prompt you to create a character by selecting a race (Human, Dwarf, or Elf).
2. Once your character is created, you will enter the game menu where you can:
   - Explore a dungeon.
   - View your list of spells.
   - Check your character's stats.
   - Quit the game.
3. If you choose to explore a dungeon, you will face a monster in combat. You can either attack or use spells.
4. Win battles to progress, recover health, and face new challenges.

## Files

- `monsters_patched.csv`: Contains a list of monsters with their stats (name, challenge rating, type, size, armor class, hit points, and alignment).
- `calabozos.csv`: Contains dungeon information (name, location, and description).
- `spells.csv`: Contains a list of spells with their effects and probabilities.

## Controls

- **1**: Attack the monster.
- **2**: Show the list of available spells.
- **3**: Show your character's stats.
- **4**: Quit the game.

## Installation and Setup
Enjoy!

1. Clone the repository:
   ```bash
   git clone https://github.com/yourusername/dnd-game.git
2. Compile the game:
 ```
  g++ -o  main *.cpp```


   
