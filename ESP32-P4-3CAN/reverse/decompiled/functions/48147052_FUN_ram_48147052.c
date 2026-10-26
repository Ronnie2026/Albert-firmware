/* Firmware entry: 0x48147052 */

int FUN_ram_48147052(uint *param_1)

{
  byte bVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uVar4 = *param_1;
  piVar2 = DAT_ram_4ff6e1ac;
  if (((uVar4 & 0xf0) == 0xe0) && (DAT_ram_4ff6e224 != 0)) {
    return DAT_ram_4ff6e224;
  }
  do {
    if (piVar2 == (int *)0x0) {
      iVar3 = FUN_ram_4814dfba(0,param_1);
      if ((((iVar3 == 0) && (DAT_ram_4ff6e1a8 != 0)) &&
          ((*(byte *)(DAT_ram_4ff6e1a8 + 0xe7) & 5) == 5)) &&
         ((*(int *)(DAT_ram_4ff6e1a8 + 4) != 0 && ((char)*param_1 != '\x7f')))) {
        return DAT_ram_4ff6e1a8;
      }
      return iVar3;
    }
    bVar1 = *(byte *)((int)piVar2 + 0xe7);
    if (((bVar1 & 1) != 0) && ((bVar1 >> 2 & 1) != 0)) {
      if (piVar2[1] != 0) {
        if (((uVar4 ^ piVar2[1]) & piVar2[7]) == 0) {
          return (int)piVar2;
        }
        if (((bVar1 & 2) == 0) && (uVar4 == piVar2[0xd])) {
          return (int)piVar2;
        }
      }
    }
    piVar2 = (int *)*piVar2;
  } while( true );
}


