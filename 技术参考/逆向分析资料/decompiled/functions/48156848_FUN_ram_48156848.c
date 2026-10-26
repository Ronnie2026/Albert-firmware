/* Firmware entry: 0x48156848 */

undefined4 FUN_ram_48156848(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  puVar1 = DAT_ram_4ff6e250;
  while( true ) {
    if (puVar1 == (undefined4 *)0x0) {
      return 0;
    }
    uVar2 = *puVar1;
    uVar3 = FUN_ram_48159640(uVar2);
    iVar4 = FUN_ram_4ff453ae(param_1,uVar3);
    if (iVar4 == 0) break;
    puVar1 = (undefined4 *)puVar1[1];
  }
  return uVar2;
}


