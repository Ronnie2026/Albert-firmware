/* Firmware entry: 0x48159dfc */

int FUN_ram_48159dfc(int param_1,undefined4 param_2,undefined4 param_3,int param_4,uint *param_5)

{
  int iVar1;
  int *piVar2;
  undefined1 auStack_28 [4];
  uint auStack_24 [2];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  FUN_ram_4815d7e0(auStack_28);
  iVar1 = DAT_ram_4ff6d418;
  do {
    if (iVar1 == 0) {
      iVar1 = 0x1107;
LAB_ram_48159e78:
      FUN_ram_4815d7f0(auStack_28);
      return iVar1;
    }
    if (param_1 == *(int *)(iVar1 + 0xc)) {
      piVar2 = *(int **)(iVar1 + 8);
      iVar1 = (**(code **)(*piVar2 + 0x18))(piVar2,param_2,param_3,auStack_24);
      if (iVar1 != 0) goto LAB_ram_48159e78;
      if (param_5 != (uint *)0x0) {
        if (param_4 == 0) {
          *param_5 = auStack_24[0];
          goto LAB_ram_48159e78;
        }
        if (auStack_24[0] <= *param_5) {
          iVar1 = *piVar2;
          *param_5 = auStack_24[0];
          iVar1 = (**(code **)(iVar1 + 0x34))
                            (piVar2,param_2,param_3,param_4,auStack_24[0],*(code **)(iVar1 + 0x34));
          goto LAB_ram_48159e78;
        }
        *param_5 = auStack_24[0];
      }
      iVar1 = 0x110c;
      goto LAB_ram_48159e78;
    }
    iVar1 = *(int *)(iVar1 + 4);
  } while( true );
}


