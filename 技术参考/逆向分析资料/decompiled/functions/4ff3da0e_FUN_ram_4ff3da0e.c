/* Firmware entry: 0x4ff3da0e */

bool FUN_ram_4ff3da0e(int param_1)

{
  uint uVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  FUN_ram_4ff3ec14(&DAT_ram_4ff47df4,0xffffffff);
  iVar4 = mhartid;
  if (param_1 == 0) {
    bVar2 = false;
  }
  else {
    piVar5 = &DAT_ram_4ff6da3c + mhartid;
    if (*(uint *)(param_1 + 0x2c) < *(uint *)(*piVar5 + 0x2c)) {
      if (-1 < *(int *)(param_1 + 0x18)) {
        *(int *)(param_1 + 0x18) = 0x19 - *(int *)(*piVar5 + 0x2c);
      }
      if (*(undefined **)(param_1 + 0x14) == &DAT_ram_4ff58c24 + *(uint *)(param_1 + 0x2c) * 0x14) {
        iVar6 = param_1 + 4;
        FUN_ram_4ff3fb48(iVar6);
        uVar1 = DAT_ram_4ff6da24;
        uVar3 = *(uint *)((&DAT_ram_4ff6da3c)[iVar4] + 0x2c);
        *(uint *)(param_1 + 0x2c) = uVar3;
        if (uVar1 < uVar3) {
          DAT_ram_4ff6da24 = uVar3;
        }
        piVar5 = (int *)(&DAT_ram_4ff58c24 + uVar3 * 0x14);
        iVar4 = *(int *)(&DAT_ram_4ff58c28 + uVar3 * 0x14);
        *(int *)(param_1 + 8) = iVar4;
        *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(iVar4 + 8);
        *(int *)(*(int *)(iVar4 + 8) + 4) = iVar6;
        *(int *)(iVar4 + 8) = iVar6;
        *(int **)(param_1 + 0x14) = piVar5;
        *piVar5 = *piVar5 + 1;
        FUN_ram_4ff2ad84(param_1,param_1 + 0x34,uVar3,DAT_ram_4ff6da28);
      }
      else {
        *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)((&DAT_ram_4ff6da3c)[mhartid] + 0x2c);
      }
      bVar2 = true;
    }
    else {
      bVar2 = *(uint *)(param_1 + 0x54) < *(uint *)(*piVar5 + 0x2c);
    }
  }
  FUN_ram_4ff3ee10(&DAT_ram_4ff47df4);
  return bVar2;
}


