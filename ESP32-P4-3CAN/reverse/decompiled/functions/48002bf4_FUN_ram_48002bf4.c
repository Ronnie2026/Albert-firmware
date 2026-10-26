/* Firmware entry: 0x48002bf4 */

uint * FUN_ram_48002bf4(uint param_1,uint param_2)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  uint *puVar4;
  uint uVar5;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  for (puVar1 = DAT_ram_4ff6d9c8; puVar1 != (uint *)0x0; puVar1 = (uint *)puVar1[3]) {
    if ((param_2 == (*puVar1 >> 0x10 & 1)) && (param_1 == (*puVar1 >> 0x11 & 0x1f))) {
      return puVar1;
    }
  }
  puVar1 = (uint *)FUN_ram_4ff206d8(0x10,0x804);
  if (puVar1 == (uint *)0x0) {
    return (uint *)0x0;
  }
  memset(puVar1,0,0x10);
  *puVar1 = *puVar1 & 0xffc0ffff | (param_1 & 0x1f) << 0x11 | (param_2 & 1) << 0x10;
  puVar3 = DAT_ram_4ff6d9c8;
  if (DAT_ram_4ff6d9c8 == (uint *)0x0) {
LAB_ram_48002cce:
    DAT_ram_4ff6d9c8 = puVar1;
    puVar1[3] = (uint)puVar3;
    return puVar1;
  }
  puVar2 = (uint *)0x0;
  puVar4 = DAT_ram_4ff6d9c8;
  while( true ) {
    puVar3 = puVar4;
    uVar5 = *puVar3;
    if (((param_2 & 1) < (uVar5 >> 0x10 & 1)) ||
       ((-1 < (int)((uVar5 ^ *puVar1) << 0xf) && ((param_1 & 0x1f) <= (uVar5 >> 0x11 & 0x1f)))))
    break;
    puVar4 = (uint *)puVar3[3];
    puVar2 = puVar3;
    puVar3 = puVar4;
    if (puVar4 == (uint *)0x0) {
LAB_ram_48002cba:
      puVar2[3] = (uint)puVar1;
      puVar1[3] = (uint)puVar3;
      return puVar1;
    }
  }
  if (puVar2 == (uint *)0x0) goto LAB_ram_48002cce;
  goto LAB_ram_48002cba;
}


