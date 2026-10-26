/* Firmware entry: 0x4818b8aa */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4818b8aa(int param_1)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  _DAT_ram_50090090 = 1;
  _DAT_ram_50090048 = 1;
  do {
  } while (_DAT_ram_5009004c != 0);
  puVar3 = (undefined4 *)&DAT_ram_50090060;
  do {
    uVar2 = *puVar3;
    puVar1 = (undefined1 *)(param_1 + -0x50090060 + (int)puVar3);
    puVar3 = puVar3 + 1;
    puVar1[1] = (char)((uint)uVar2 >> 8);
    *puVar1 = (char)uVar2;
    puVar1[2] = (char)((uint)uVar2 >> 0x10);
    puVar1[3] = (char)((uint)uVar2 >> 0x18);
  } while (puVar3 != (undefined4 *)&DAT_ram_50090070);
  return;
}


