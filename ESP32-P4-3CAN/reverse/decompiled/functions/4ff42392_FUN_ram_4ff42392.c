/* Firmware entry: 0x4ff42392 */

undefined4 FUN_ram_4ff42392(int *param_1,uint param_2,uint param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  code *pcVar4;
  uint uVar5;
  uint *puVar6;
  uint uStack_24;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  puVar6 = (uint *)param_1[1];
  puVar6[1] = param_3;
  iVar3 = param_4 * 8;
  puVar6[6] = puVar6[6] & 0xefffffff | (uint)(iVar3 != 0) << 0x1c;
  uVar2 = 0;
  if (iVar3 != 0) {
    uVar2 = iVar3 - 1U & 0x3ff;
  }
  puVar6[10] = puVar6[10] & 0xfffffc00 | uVar2;
  pcVar4 = *(code **)(*param_1 + 0x40);
  *puVar6 = *puVar6 | 0x40000;
  (*pcVar4)();
  if (param_4 != 0) {
    if (((param_2 | param_4) & 3) == 0) {
      FUN_ram_4ff45158(param_2,puVar6 + 0x16,param_4);
    }
    else {
      uVar2 = param_4 + 3 >> 2;
      if (uVar2 != 0) {
        uVar5 = 0;
        do {
          uVar1 = param_4;
          if (4 < param_4) {
            uVar1 = 4;
          }
          uStack_24 = puVar6[uVar5 + 0x16];
          uVar5 = uVar5 + 1;
          FUN_ram_4ff45158(param_2,&uStack_24,uVar1);
          param_4 = param_4 - uVar1;
          param_2 = param_2 + uVar1;
        } while (uVar5 != uVar2);
      }
    }
  }
  return 0;
}


