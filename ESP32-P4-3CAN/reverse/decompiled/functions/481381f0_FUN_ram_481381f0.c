/* Firmware entry: 0x481381f0 */

undefined4 FUN_ram_481381f0(undefined4 param_1,int param_2,undefined4 *param_3,uint param_4)

{
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 uVar5;
  undefined4 uVar6;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  puVar1 = &DAT_ram_4ff6c92a;
  do {
    if ((((puVar1[-6] == '\x03') && (iVar2 = FUN_ram_48137ffa(param_1,puVar1,param_2), iVar2 == 0))
        && (puVar1[param_2] == '\0')) && (puVar1[-10] != '\0')) {
      if (puVar1[-0xe] == '\x06') {
        if (((param_4 == 3) || (param_4 == 1)) && (param_3 != (undefined4 *)0x0)) {
          *(undefined1 *)(param_3 + 5) = 6;
          uVar6 = *(undefined4 *)(puVar1 + -0x16);
          uVar3 = *(undefined4 *)(puVar1 + -0x1e);
          uVar4 = *(undefined4 *)(puVar1 + -0x1a);
          *param_3 = *(undefined4 *)(puVar1 + -0x22);
          param_3[1] = uVar3;
          param_3[2] = uVar4;
          param_3[3] = uVar6;
          uVar5 = puVar1[-0x12];
          goto LAB_ram_4813828e;
        }
      }
      else if (((param_4 & 0xfd) != 1) && (param_3 != (undefined4 *)0x0)) {
        *(undefined *)(param_3 + 5) = puVar1[-0xe];
        uVar3 = *(undefined4 *)(puVar1 + -0x22);
        param_3[3] = 0;
        param_3[2] = 0;
        *param_3 = uVar3;
        param_3[1] = 0;
        uVar5 = 0;
LAB_ram_4813828e:
        *(undefined1 *)(param_3 + 4) = uVar5;
        gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
        return 0;
      }
    }
    puVar1 = puVar1 + 0x128;
    if (puVar1 == (undefined *)0x4ff6cdca) {
      return 0xfffffff0;
    }
  } while( true );
}


