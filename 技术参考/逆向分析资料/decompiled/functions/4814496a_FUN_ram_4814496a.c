/* Firmware entry: 0x4814496a */

void FUN_ram_4814496a(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined1 *puVar6;
  int iVar7;
  ushort uStack_22;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar1 = *(int *)(param_1 + 0xc4);
  if ((iVar1 != 0) && (*(char *)(iVar1 + 5) != '\0')) {
    if (param_2 == 1) {
      if (*(char *)(iVar1 + 5) != '\f') {
        *(undefined1 *)(iVar1 + 5) = 0xc;
        *(undefined1 *)(iVar1 + 6) = 0;
      }
      *(undefined4 *)(iVar1 + 0xc) = 0x14;
      if (*(char *)(iVar1 + 8) == '\0') {
        FUN_ram_48142636(500,&LAB_ram_481457a2,param_1);
        *(undefined1 *)(iVar1 + 8) = 1;
      }
    }
    else if (param_2 == 2) {
      FUN_ram_4813985e(param_1,&DAT_ram_48236f9c,&DAT_ram_48236f9c,&DAT_ram_48236f9c);
      iVar1 = *(int *)(param_1 + 0xc4);
      if (*(char *)(iVar1 + 5) != '\f') {
        *(undefined1 *)(iVar1 + 5) = 0xc;
        *(undefined1 *)(iVar1 + 6) = 0;
        *(undefined4 *)(iVar1 + 0xc) = 0;
      }
      iVar3 = FUN_ram_4814369e(param_1,iVar1,4,&uStack_22);
      if (iVar3 != 0) {
        uVar5 = (uint)uStack_22;
        iVar7 = *(int *)(iVar3 + 4);
        iVar2 = iVar7 + 0xf0;
        if (0x45 < uVar5 + 6) {
                    /* WARNING: Subroutine does not return */
          FUN_ram_48143a34();
        }
        *(undefined1 *)(iVar2 + uVar5) = 0x32;
        *(undefined1 *)((uVar5 + 1 & 0xffff) + iVar2) = 4;
        uStack_22 = (ushort)((uVar5 + 2) * 0x10000 >> 0x10);
        uVar4 = FUN_ram_48137fd6(*(undefined4 *)(iVar1 + 0x40));
        uStack_22 = FUN_ram_48143a84(uVar5 + 2 & 0xffff,iVar2,uVar4);
        FUN_ram_4814e070(param_1,0xc,iVar7,&uStack_22);
        *(undefined1 *)((uint)uStack_22 + iVar2) = 0xff;
        uVar5 = uStack_22 + 1 & 0xffff;
        if (0x43 < uVar5) goto LAB_ram_48144a8a;
        do {
          do {
            puVar6 = (undefined1 *)(iVar2 + uVar5);
            uVar5 = uVar5 + 1 & 0xffff;
            *puVar6 = 0;
          } while (uVar5 < 0x44);
LAB_ram_48144a8a:
        } while (((uVar5 & 3) != 0) && (uVar5 == 0x44));
        FUN_ram_4813af5e(iVar3,uVar5 + 0xf0 & 0xffff);
        FUN_ram_48142ebc(DAT_ram_4ff6e214,iVar3,&DAT_ram_48236f84,0x43,param_1,&DAT_ram_48236f9c);
        FUN_ram_4813ac74(iVar3);
      }
    }
    else if (param_2 == 0) {
      FUN_ram_48143890();
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_ram_4ff44e88("/IDF/components/lwip/lwip/src/core/ipv4/dhcp.c",0x175,"dhcp_conflict_callback",
                   "DHCP should be enabled at this point, but it is not!");
}


