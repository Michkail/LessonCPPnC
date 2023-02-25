## Dinosaurs Language Learning Flow

```mermaid
graph LR
    A[Write Code] --> B{Does it work?}
    B -- Yes --> C[Great!]
    B -- No --> D{!Suicide}
    C -- Repeat until u die --> A
    D -- No --> F[Don't do shit, keep going] --> E[Debugging]
    D -- Yes --> E
    E --> G{Does it work?}
    G -- No --> H[Read Documentation, dude] --> E
    G -- Yes --> C
```
