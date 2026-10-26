/* Firmware entry: 0x4ff3f158 */

uint FUN_ram_4ff3f158(uint *param_1,int param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int aiStack_28 [8];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_3 < 3) {
    uVar1 = param_1[0x12] - 0x18 & 0xfffffff0;
    if (*(int *)(uVar1 + 8) == 0) {
      uVar4 = param_1[0xc];
      *(uint *)(uVar1 + 4) = uVar4;
      *(uint *)(uVar1 + 8) = uVar4;
    }
    if (param_2 != 0) {
      iVar3 = uVar1 + param_3 * 4;
      if (*(int *)(iVar3 + 0xc) == 0) {
        aiStack_28[3] = 4;
        aiStack_28[4] = 4;
        aiStack_28[5] = 0x10;
        aiStack_28[2] = 0xd8;
        aiStack_28[0] = 0x84;
        aiStack_28[1] = 0x18;
        iVar2 = aiStack_28[param_3];
        uVar5 = aiStack_28[param_3 + 3] + -1 + *(int *)(uVar1 + 8) & -aiStack_28[param_3 + 3];
        *(uint *)(iVar3 + 0xc) = uVar5;
        uVar5 = uVar5 + iVar2;
        uVar4 = *param_1;
        *(uint *)(uVar1 + 8) = uVar5;
        param_1[0xc] = uVar5;
        if (uVar4 <= uVar5) {
          DAT_ram_4ff6d958 = "ERROR: Stack overflow while saving coprocessor context!\n";
          DAT_ram_4ff6d95c = 1;
          FUN_ram_4ff205e0(uVar4);
        }
      }
    }
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_ram_4ff44e88("port.c",0x31d,"pxPortGetCoprocArea","coproc < SOC_CPU_COPROC_NUM");
}


