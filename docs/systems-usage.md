# Systems Description
In this section, we'll explain the way we are using each systems in our project.

## Render System
This system is globally responsible for the rendering of every "drawable" entities. In order to fulfill this purpose, this system loop through a set of entities (std::set<Entity>) named `_entitiesList`, get the components "Drawable" which is a struct containing the path of the sprite to display and "Transform" which holds the position, rotation and scale of the entity to draw.

## Physics System

## Controllable System