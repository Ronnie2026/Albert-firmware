/* Firmware entry: 0x481880c0 */

undefined4 FUN_ram_481880c0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  FUN_ram_481322ba();
  FUN_ram_481324d8(1);
  FUN_ram_4818afcc(param_1,param_1 + 0x30,*(undefined2 *)(param_1 + 0x60));
  FUN_ram_4818ad7a(2);
  FUN_ram_4818ae9c();
  do {
    iVar1 = FUN_ram_4818aeb4();
  } while (iVar1 == 0);
  uVar2 = FUN_ram_4818b110();
  FUN_ram_481324d8(0);
  FUN_ram_481322ca();
  return uVar2;
}


