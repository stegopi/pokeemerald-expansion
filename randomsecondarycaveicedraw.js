function randInt(min, max) {
    min = Math.ceil(min);
    max = Math.floor(max);
    return Math.floor(Math.random() * (max - min)) + min;
}

const iceTiles = [0x38C, 0x386, 0x387, 0x38F, 0x38E, 0x385, 0x381, 0x28F, 0x381, 0x381, 0x381, 0x381];

export function onBlockChanged(x, y, prevBlock, newBlock) {
    if (iceTiles.indexOf(newBlock.metatileId) != -1 && map.getSecondaryTileset() == "gTileset_Cave") {
        const i = randInt(0, iceTiles.length);
        map.setMetatileId(x, y, iceTiles[i]);
    }
}