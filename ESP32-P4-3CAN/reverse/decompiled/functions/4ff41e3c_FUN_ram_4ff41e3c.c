/* Firmware entry: 0x4ff41e3c */

undefined4 FUN_ram_4ff41e3c(int *param_1,uint param_2,uint param_3,uint param_4)

{
  uint *puVar1;
  code *pcVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uStack_24;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  puVar1 = (uint *)param_1[1];
  if ((int)(puVar1[4] << 1) < 0) {
    uVar3 = (puVar1[5] >> 0x1b) + 1;
    uVar4 = uVar3 & 0xfffffff8;
    if (uVar4 != 0x20) {
      param_3 = param_3 << (0x20 - uVar4 & 0x1f) | 0xffffffffU >> (uVar3 & 0x18);
    }
  }
  else {
    param_3 = 0xffffffff;
  }
  puVar1[1] = param_3;
  iVar5 = param_4 * 8;
  puVar1[4] = puVar1[4] & 0xefffffff | (uint)(iVar5 != 0) << 0x1c;
  if (iVar5 != 0) {
    puVar1[7] = iVar5 - 1U & 0x3ffff | puVar1[7] & 0xfffc0000;
  }
  *puVar1 = *puVar1 | 0x800000;
  do {
  } while ((int)(*puVar1 << 8) < 0);
  pcVar2 = *(code **)(*param_1 + 0x40);
  *puVar1 = *puVar1 | 0x1000000;
  (*pcVar2)();
  if (param_4 != 0) {
    if (((param_2 | param_4) & 3) == 0) {
      FUN_ram_4ff45158(param_2,puVar1 + 0x26,param_4);
    }
    else {
      uVar3 = param_4 + 3 >> 2;
      if (uVar3 != 0) {
        uVar4 = 0;
        do {
          uVar6 = param_4;
          if (4 < param_4) {
            uVar6 = 4;
          }
          uStack_24 = puVar1[uVar4 + 0x26];
          uVar4 = uVar4 + 1;
          FUN_ram_4ff45158(param_2,&uStack_24,uVar6);
          param_4 = param_4 - uVar6;
          param_2 = param_2 + uVar6;
        } while (uVar4 != uVar3);
        return 0;
      }
    }
  }
  return 0;
}


