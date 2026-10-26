/* Firmware entry: 0x48131958 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_48131958(undefined4 *param_1,uint *param_2,int param_3)

{
  undefined1 *puVar1;
  uint uVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  puVar1 = (undefined1 *)*param_1;
  if (puVar1 == &DAT_ram_500ca000) {
    uVar2 = (_DAT_ram_500e606c & 0xff) + 1;
  }
  else if (puVar1 == &DAT_ram_500cb000) {
    uVar2 = (_DAT_ram_500e6070 & 0xff) + 1;
  }
  else if (puVar1 == &DAT_ram_500cc000) {
    uVar2 = (_DAT_ram_500e6074 & 0xff) + 1;
  }
  else if (puVar1 == &DAT_ram_500cd000) {
    uVar2 = (_DAT_ram_500e6078 & 0xff) + 1;
  }
  else if (puVar1 == &DAT_ram_500ce000) {
    uVar2 = (_DAT_ram_500e607c & 0xff) + 1;
  }
  else {
    uVar2 = (uint)(puVar1 == (undefined1 *)0x50121000);
  }
  *param_2 = (uint)(param_3 << 4) /
             (((*(uint *)(puVar1 + 0x14) & 0xfff) << 4 | *(uint *)(puVar1 + 0x14) >> 0x14 & 0xf) *
             uVar2);
  return;
}


