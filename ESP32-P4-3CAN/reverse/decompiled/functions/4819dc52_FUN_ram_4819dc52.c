/* Firmware entry: 0x4819dc52 */

void FUN_ram_4819dc52(undefined4 param_1,int param_2,int param_3,int param_4,undefined4 param_5)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  byte *pbVar4;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar2 = 0;
  for (iVar3 = 1; iVar3 < (param_4 + 8) / 9; iVar3 = iVar3 << 1) {
    iVar2 = iVar2 + 1;
  }
  iVar2 = FUN_ram_4819da72(param_1,iVar2);
  if (iVar2 != 0) {
    *(undefined4 *)(iVar2 + 0x10) = 1;
    *(undefined4 *)(iVar2 + 0x14) = param_5;
    if (param_3 < 10) {
      pbVar4 = (byte *)(param_2 + 10);
      param_3 = 9;
      iVar3 = param_3;
    }
    else {
      pbVar4 = (byte *)(param_2 + 9);
      do {
        bVar1 = *pbVar4;
        pbVar4 = pbVar4 + 1;
        iVar2 = FUN_ram_4819db8c(param_1,iVar2,10,bVar1 - 0x30);
      } while (pbVar4 != (byte *)(param_2 + param_3));
      pbVar4 = (byte *)(param_2 + 9) + param_3 + -8;
      iVar3 = param_3;
    }
    for (; param_3 < param_4; param_3 = param_3 + 1) {
      iVar2 = FUN_ram_4819db8c(param_1,iVar2,10,pbVar4[param_3 - iVar3] - 0x30);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_ram_4ff44e88("/builds/idf/crosstool-NG/.build/riscv32-esp-elf/src/newlib/newlib/libc/stdlib/mprec.c"
                   ,0xd3,0,"Balloc succeeded");
}


