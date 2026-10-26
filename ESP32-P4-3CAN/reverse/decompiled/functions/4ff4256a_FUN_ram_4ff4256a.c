/* Firmware entry: 0x4ff4256a */

void FUN_ram_4ff4256a(int *param_1,int param_2,uint param_3,uint param_4)

{
  uint uVar1;
  int iVar2;
  code *UNRECOVERED_JUMPTABLE;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  uint uVar6;
  uint auStack_34 [4];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  puVar5 = (uint *)param_1[1];
  iVar2 = FUN_ram_4ff20626();
  if (iVar2 != 0) {
    puVar5[0xf] = puVar5[0xf] & 0xfffffffd;
  }
  puVar5[7] = puVar5[7] & 0x3ffffff | 0x5c000000;
  puVar5[6] = puVar5[6] | 0x40000000;
  puVar5[1] = param_3 & 0xffffff | param_4 << 0x18;
  puVar5[6] = puVar5[6] & 0xdfffffff;
  uVar6 = param_4 + 3 >> 2;
  if (uVar6 != 0) {
    uVar3 = 0;
    do {
      auStack_34[0] = 0;
      uVar1 = param_4;
      if (4 < param_4) {
        uVar1 = 4;
      }
      FUN_ram_4ff45158(auStack_34,param_2,uVar1);
      uVar4 = uVar3 + 1;
      puVar5[uVar3 + 0x16] = auStack_34[0];
      param_4 = param_4 - uVar1;
      param_2 = param_2 + uVar1;
      uVar3 = uVar4;
    } while (uVar6 != uVar4);
  }
  UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x40);
  *puVar5 = *puVar5 | 0x2000000;
                    /* WARNING: Could not recover jumptable at 0x4ff4263a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1);
  return;
}


