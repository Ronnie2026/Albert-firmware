/* Firmware entry: 0x4813a2d0 */

void FUN_ram_4813a2d0(int param_1,int param_2,uint param_3,int param_4,int param_5,int param_6)

{
  byte bVar1;
  undefined4 *puVar2;
  int iVar3;
  code *pcVar4;
  int iVar5;
  undefined1 auStack_5c [4];
  uint *puStack_58;
  uint uStack_50;
  int iStack_4c;
  int iStack_48;
  int iStack_44;
  undefined1 uStack_40;
  undefined1 uStack_3c;
  uint uStack_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  char cStack_28;
  char cStack_24;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff44e88("/IDF/components/lwip/lwip/src/core/netif.c",0x57b,"netif_ip6_addr_set_parts",
                     "netif != NULL");
  }
  if (param_2 < 3) {
    iVar3 = param_2 * 0x18 + param_1;
    uStack_50 = *(uint *)(iVar3 + 0x4c);
    iStack_4c = *(int *)(iVar3 + 0x50);
    iStack_48 = *(int *)(iVar3 + 0x54);
    iStack_44 = *(int *)(iVar3 + 0x58);
    uStack_40 = *(undefined1 *)(iVar3 + 0x5c);
    uStack_3c = 6;
    if ((((uStack_50 != param_3) || (iStack_4c != param_4)) || (iStack_48 != param_5)) ||
       (iStack_44 != param_6)) {
      cStack_24 = '\x06';
      cStack_28 = '\0';
      if ((param_3 & 0xc0ff) == 0x80fe) {
        cStack_28 = *(char *)(param_1 + 0xea) + '\x01';
      }
      iVar3 = param_1 + param_2;
      uStack_38 = param_3;
      iStack_34 = param_4;
      iStack_30 = param_5;
      iStack_2c = param_6;
      if ((*(byte *)(iVar3 + 0x94) & 0x10) == 0) {
        iVar3 = param_2 * 0x18 + param_1;
        *(uint *)(iVar3 + 0x4c) = param_3;
        *(int *)(iVar3 + 0x50) = param_4;
        *(int *)(iVar3 + 0x54) = param_5;
        *(int *)(iVar3 + 0x58) = param_6;
        *(char *)(iVar3 + 0x5c) = cStack_28;
        *(undefined1 *)(iVar3 + 0x60) = 6;
      }
      else {
        iVar5 = param_2 * 0x18 + 0x4c + param_1;
        FUN_ram_4813d1fe(iVar5,&uStack_38);
        FUN_ram_481435c4(iVar5,&uStack_38);
        FUN_ram_4813be48(iVar5,&uStack_38);
        iVar5 = param_1 + param_2 * 0x18;
        *(char *)(iVar5 + 0x60) = cStack_24;
        if (cStack_24 == '\x06') {
          bVar1 = *(byte *)(iVar3 + 0x94);
          iVar3 = param_2 * 0x18 + param_1;
          *(uint *)(iVar3 + 0x4c) = uStack_38;
          *(int *)(iVar3 + 0x50) = iStack_34;
          *(int *)(iVar3 + 0x54) = iStack_30;
          *(int *)(iVar3 + 0x58) = iStack_2c;
          *(char *)(iVar3 + 0x5c) = cStack_28;
        }
        else {
          *(uint *)(iVar5 + 0x4c) = uStack_38;
          *(undefined4 *)(iVar5 + 0x58) = 0;
          *(undefined4 *)(iVar5 + 0x54) = 0;
          *(undefined4 *)(iVar5 + 0x50) = 0;
          *(undefined1 *)(iVar5 + 0x5c) = 0;
          bVar1 = *(byte *)(iVar3 + 0x94);
        }
        if (((bVar1 & 0x10) != 0) && ((*(byte *)(param_1 + 0xe7) & 5) == 5)) {
          FUN_ram_48149bb6(param_1);
        }
      }
      puStack_58 = &uStack_50;
      auStack_5c[0] = (undefined1)param_2;
      puVar2 = DAT_ram_4ff6e1b0;
      while (puVar2 != (undefined4 *)0x0) {
        pcVar4 = (code *)*puVar2;
        puVar2 = (undefined4 *)puVar2[1];
        (*pcVar4)(param_1,0x100,auStack_5c);
      }
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_ram_4ff44e88("/IDF/components/lwip/lwip/src/core/netif.c",0x57c,"netif_ip6_addr_set_parts",
                   "invalid index");
}


