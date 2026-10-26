/* Firmware entry: 0x48032f3e */

void FUN_ram_48032f3e(int param_1)

{
  undefined4 uVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if ((param_1 != 0xc) && (param_1 != 0xe)) {
    param_1 = 0xd;
  }
  DAT_ram_4ff47ea0 = param_1;
  uVar1 = FUN_ram_48025ba6();
  if (DAT_ram_4ff48b58 != '\0') {
    fence();
    fence();
    fence();
    DAT_ram_4ff48b0c = 1;
    DAT_ram_4ff48b14 = 0;
    DAT_ram_4ff48b18 = 0xffffffff;
    DAT_ram_4ff48b1c = 0;
    DAT_ram_4ff48b20 = 0;
    DAT_ram_4ff48b24 = 0;
    DAT_ram_4ff48b28 = 0;
    DAT_ram_4ff48b04 = (DAT_ram_4ff48b04 + 1U & 0xfffffffe) + 2;
    fence();
    DAT_ram_4ff48b08 = uVar1;
    DAT_ram_4ff48b10 = param_1;
  }
  return;
}


