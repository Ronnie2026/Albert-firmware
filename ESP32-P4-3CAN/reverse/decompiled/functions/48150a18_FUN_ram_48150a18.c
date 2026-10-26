/* Firmware entry: 0x48150a18 */

void FUN_ram_48150a18(uint *param_1)

{
  undefined *puVar1;
  uint *puVar2;
  int iVar3;
  undefined *puStack_3c;
  undefined *puStack_38;
  int iStack_34;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if ((param_1[0xc] & 8) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff44e88("/IDF/components/lwip/lwip/src/api/api_msg.c",0x36a,"netconn_drain",
                     "netconn marked closed");
  }
  puVar2 = param_1 + 4;
  if (param_1[4] != 0) {
LAB_ram_48150a58:
    iVar3 = FUN_ram_4814e5f6(puVar2,&puStack_3c);
    if (iVar3 != -1) {
      while (puStack_3c != &DAT_ram_48237593) {
        if ((*param_1 & 0xf0) == 0x10) {
          if (((puStack_3c != &DAT_ram_48237592) && (puStack_3c != &DAT_ram_48237591)) &&
             (puStack_3c != &DAT_ram_48237590)) {
            FUN_ram_4813ac74();
          }
          break;
        }
        FUN_ram_481517f0();
        iVar3 = FUN_ram_4814e5f6(puVar2,&puStack_3c);
        if (iVar3 == -1) goto LAB_ram_48150a8a;
      }
      goto LAB_ram_48150a58;
    }
LAB_ram_48150a8a:
    FUN_ram_4814e658(puVar2);
    param_1[4] = 0;
  }
  if (param_1[5] != 0) {
    while (iVar3 = FUN_ram_4814e5f6(param_1 + 5,&puStack_3c), puVar1 = puStack_3c, iVar3 != -1) {
      if (((puStack_3c != &DAT_ram_48237593) && (puStack_3c != &DAT_ram_48237592)) &&
         ((puStack_3c != &DAT_ram_48237591 && (puStack_3c != &DAT_ram_48237590)))) {
        puStack_3c[0x30] = puStack_3c[0x30] | 8;
        FUN_ram_48150a18(puStack_3c);
        if (*(int *)(puVar1 + 8) != 0) {
          puStack_38 = (undefined *)0x0;
          iStack_34 = *(int *)(puVar1 + 8);
          FUN_ram_48137954(&LAB_ram_4814faae,&puStack_38);
          *(undefined4 *)(puVar1 + 8) = 0;
        }
        FUN_ram_48150988(puVar1);
      }
    }
    FUN_ram_4814e658(param_1 + 5);
    param_1[5] = 0;
  }
  return;
}


