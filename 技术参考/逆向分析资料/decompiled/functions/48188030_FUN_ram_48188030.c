/* Firmware entry: 0x48188030 */

undefined4 FUN_ram_48188030(int param_1,undefined4 param_2,void *param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uVar3 = (uint)*(ushort *)(param_1 + 0x60);
  FUN_ram_481322ba();
  FUN_ram_481324d8(1);
  FUN_ram_4818aebe(param_2,param_1,param_1 + 0x30,uVar3);
  FUN_ram_4818ad7a((-(uint)(param_4 == 0) & 0xfffffffd) + 3);
  FUN_ram_4818b11c(1);
  FUN_ram_4818ae9c();
  memset(param_3,0,100);
  *(uint *)((int)param_3 + 0x60) = uVar3;
  do {
    iVar1 = FUN_ram_4818aeb4();
  } while (iVar1 == 0);
  uVar2 = FUN_ram_4818b096(param_3,(int)param_3 + 0x30,uVar3);
  FUN_ram_481324d8(0);
  FUN_ram_481322ca();
  return uVar2;
}


