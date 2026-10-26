/* Firmware entry: 0x4ff47b7a */

void FUN_ram_4ff47b7a(undefined4 param_1,uint param_2,uint *param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar1 = 5;
  while( true ) {
    uVar2 = FUN_ram_480020c6(0x804);
    if (uVar2 <= param_2) {
      param_2 = FUN_ram_480020c6(0x804);
    }
    param_2 = param_2 + 3 & 0xfffffffc;
    iVar3 = FUN_ram_4ff206d8(param_2,0x804);
    iVar1 = iVar1 + -1;
    if (iVar3 != 0) break;
    if (iVar1 == 0) {
      *param_3 = 0;
      return;
    }
  }
  *param_3 = param_2;
  return;
}


