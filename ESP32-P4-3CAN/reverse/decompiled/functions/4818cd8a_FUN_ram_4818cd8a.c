/* Firmware entry: 0x4818cd8a */

undefined4 FUN_ram_4818cd8a(int *param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if ((param_1 == (int *)0x0) || (param_2 == 0)) {
    return 0xfffffff0;
  }
  if (*param_1 == param_2) {
    if (param_1[0x12] != 0) {
      FUN_ram_48143474();
      FUN_ram_4814351a(param_1[0x12]);
      param_1[0x12] = 0;
    }
    puVar4 = (undefined4 *)param_1[8];
    puVar5 = puVar4;
    if (puVar4 != (undefined4 *)0x0) {
      do {
        puVar1 = (undefined4 *)puVar4[1];
        if (puVar5 == (undefined4 *)0x0) {
LAB_ram_4818cdce:
          thunk_FUN_ram_4ff209c6(*puVar4);
          thunk_FUN_ram_4ff209c6(puVar4);
        }
        else {
          if (puVar5 != puVar4) {
            do {
              while (puVar3 = (undefined4 *)puVar5[1], puVar3 != puVar4) {
                puVar5 = puVar3;
                if (puVar3 == (undefined4 *)0x0) goto LAB_ram_4818cdce;
              }
              puVar5[1] = puVar4[1];
              puVar4[1] = 0;
              puVar5 = (undefined4 *)puVar5[1];
            } while (puVar5 != (undefined4 *)0x0);
            goto LAB_ram_4818cdce;
          }
          param_1[8] = (int)puVar1;
          thunk_FUN_ram_4ff209c6(*puVar4);
          thunk_FUN_ram_4ff209c6(puVar4);
        }
        if (puVar1 == (undefined4 *)0x0) break;
        puVar4 = puVar1;
        puVar5 = (undefined4 *)param_1[8];
      } while( true );
    }
    FUN_ram_4814268a(&DAT_ram_4818beee,param_1);
    param_1[0x13] = 2;
    uVar2 = 0;
  }
  else {
    uVar2 = 0xfffffff0;
  }
  return uVar2;
}


