/* Firmware entry: 0x48156740 */

undefined4 FUN_ram_48156740(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  puVar1 = (undefined4 *)FUN_ram_4ff45080(1,8);
  if (puVar1 == (undefined4 *)0x0) {
    uVar2 = 0x101;
  }
  else {
    DAT_ram_4ff6e24c = DAT_ram_4ff6e24c + 1;
    *puVar1 = param_1;
    puVar1[1] = DAT_ram_4ff6e250;
    uVar2 = 0;
    DAT_ram_4ff6e250 = puVar1;
  }
  return uVar2;
}


