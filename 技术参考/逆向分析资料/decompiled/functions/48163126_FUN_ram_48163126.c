/* Firmware entry: 0x48163126 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_48163126(uint param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  uVar1 = _DAT_ram_50083030;
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uVar3 = *(uint *)(param_2 + 0x28);
  uVar4 = param_1 & 0x100;
  if ((int)(uVar3 << 0x13) < 0) {
    if ((uVar3 & 0x200) != 0) {
      FUN_ram_4ff45158(param_2 + 8,&DAT_ram_50083030,0x10);
      if (uVar4 != 0) goto LAB_ram_481631da;
      goto LAB_ram_48163190;
    }
    *(undefined4 *)(param_2 + 0xc) = 0;
    *(undefined4 *)(param_2 + 0x10) = 0;
    *(undefined4 *)(param_2 + 8) = uVar1;
    *(undefined4 *)(param_2 + 0x14) = 0;
    if (uVar4 == 0) goto LAB_ram_48163190;
LAB_ram_481631da:
    uVar1 = 0x107;
  }
  else {
    if (uVar4 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_ram_4ff44e88("sdmmc_transaction.c",0x12f,"process_command_response",
                       "cmd->flags & SCF_RSP_PRESENT");
    }
LAB_ram_48163190:
    if (((uVar3 & 0x400) != 0) && ((param_1 & 0x40) != 0)) {
      iVar2 = *(int *)(param_2 + 0x18);
      *(undefined4 *)(param_2 + 0x2c) = 0x109;
      goto joined_r0x481631e2;
    }
    if ((param_1 & 2) == 0) {
      gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
      return;
    }
    uVar1 = 0x108;
  }
  iVar2 = *(int *)(param_2 + 0x18);
  *(undefined4 *)(param_2 + 0x2c) = uVar1;
joined_r0x481631e2:
  if (iVar2 == 0) {
    return;
  }
  FUN_ram_48165de4();
  return;
}


