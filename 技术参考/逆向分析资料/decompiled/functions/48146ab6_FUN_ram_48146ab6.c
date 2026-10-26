/* Firmware entry: 0x48146ab6 */

undefined4 FUN_ram_48146ab6(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar1 = FUN_ram_48146802(param_1,&DAT_ram_4ff6e220);
  if (iVar1 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    *(undefined1 *)(iVar1 + 9) = 2;
    *(char *)(iVar1 + 0xc) = *(char *)(iVar1 + 0xc) + '\x01';
    if (*(code **)(param_1 + 0xf0) != (code *)0x0) {
      (**(code **)(param_1 + 0xf0))(param_1,&DAT_ram_4ff6e220,1);
    }
    uVar2 = 0;
  }
  return uVar2;
}


