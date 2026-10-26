/* Firmware entry: 0x4ff2a8ca */

/* WARNING: Removing unreachable block (ram,0x4ff2a96c) */

void FUN_ram_4ff2a8ca(undefined1 param_1,int param_2,undefined4 param_3,undefined1 param_4)

{
  uint uVar1;
  int iVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  FUN_ram_4ff3ebfe();
  iVar2 = DAT_ram_4ff50f74 * 0x24;
  (&DAT_ram_4ff50fb9)[iVar2] = (param_2 == 0) + '\x03';
  *(undefined4 *)(&DAT_ram_4ff50fa8 + iVar2) = cycle;
  *(undefined4 *)(&DAT_ram_4ff50fac + iVar2) = 0;
  *(undefined4 *)(&DAT_ram_4ff50fb0 + iVar2) = 0;
  (&DAT_ram_4ff50fb8)[iVar2] = 0;
  (&DAT_ram_4ff50fba)[iVar2] = param_1;
  *(undefined4 *)(&DAT_ram_4ff50fbc + iVar2) = 0;
  *(undefined4 *)(&DAT_ram_4ff50fc0 + iVar2) = 0;
  uVar1 = DAT_ram_4ff50f78;
  *(undefined4 *)(&DAT_ram_4ff50fc4 + iVar2) = 0;
  *(undefined4 *)(&DAT_ram_4ff50fc8 + iVar2) = 0;
  if (uVar1 < 0x10) {
    DAT_ram_4ff50f78 = uVar1 + 1;
  }
  iVar2 = DAT_ram_4ff50f74 * 0x24;
  DAT_ram_4ff50f7c = DAT_ram_4ff50f7c + 1;
  DAT_ram_4ff50f74 = DAT_ram_4ff50f74 + 1 & 0xf;
  *(undefined4 *)(&DAT_ram_4ff50fb4 + iVar2) = param_3;
  (&DAT_ram_4ff50fbb)[iVar2] = param_4;
  FUN_ram_4ff3ec08();
  return;
}


