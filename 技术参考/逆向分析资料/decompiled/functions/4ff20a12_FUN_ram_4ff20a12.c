/* Firmware entry: 0x4ff20a12 */

int FUN_ram_4ff20a12(uint param_1,uint param_2,uint param_3)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  uint uStack_2c;
  uint uStack_28;
  uint auStack_24 [2];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uStack_2c = param_3;
  uStack_28 = param_2;
  auStack_24[0] = param_1;
  FUN_ram_4ff2c374(auStack_24,&uStack_28,&uStack_2c);
  if (0x3ffffff < uStack_28 - 1) {
    return 0;
  }
  if ((uStack_2c & 1) == 0) {
    if ((uStack_2c & 2) == 0) goto LAB_ram_4ff20a4c;
  }
  else {
    if ((uStack_2c & 0xc) != 0) {
      return 0;
    }
    uStack_2c = uStack_2c | 2;
  }
  uStack_28 = uStack_28 + 3 & 0xfffffffc;
LAB_ram_4ff20a4c:
  iVar3 = 0;
  puVar1 = DAT_ram_4ff6d9b0;
  do {
    while (puVar1 == (uint *)0x0) {
      iVar3 = iVar3 + 1;
      puVar1 = DAT_ram_4ff6d9b0;
      if (iVar3 == 3) {
        return 0;
      }
    }
    if (((puVar1[7] != 0) && ((puVar1[iVar3] & uStack_2c) != 0)) &&
       (uStack_2c == ((*puVar1 | puVar1[1] | puVar1[2]) & uStack_2c))) {
      if (auStack_24[0] < 5) {
        iVar2 = FUN_ram_4ff43334();
      }
      else {
        iVar2 = FUN_ram_4ff43218(puVar1[7],uStack_28,auStack_24[0],0);
      }
      if (iVar2 != 0) {
        return iVar2;
      }
    }
    puVar1 = (uint *)puVar1[8];
  } while( true );
}


