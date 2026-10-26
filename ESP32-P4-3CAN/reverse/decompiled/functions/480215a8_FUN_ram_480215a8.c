/* Firmware entry: 0x480215a8 */

/* WARNING: Type propagation algorithm not settling */

undefined4 FUN_ram_480215a8(void)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  undefined *puVar5;
  int iVar6;
  undefined4 local_80;
  undefined4 uStack_7c;
  int aiStack_78 [2];
  undefined4 local_70;
  ushort uStack_6e;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  FUN_ram_4819ab6a(10);
  local_80 = 0x10;
  uStack_7c = 0x10;
  FUN_ram_4819ac1a("sock_fd\tprotocol\tlocal_addr\t\tpeer_addr");
  iVar6 = 0;
  iVar3 = 0x36;
  do {
    while( true ) {
      local_70 = 0;
      uStack_6c = 0;
      uStack_68 = 0;
      uStack_64 = 0;
      local_60 = 0;
      uStack_5c = 0;
      uStack_58 = 0;
      uStack_54 = 0;
      local_80 = 0x10;
      uStack_7c = 0x10;
      local_50 = 0;
      uStack_4c = 0;
      uStack_48 = 0;
      uStack_44 = 0;
      local_40 = 0;
      uStack_3c = 0;
      uStack_38 = 0;
      uStack_34 = 0;
      aiStack_78[0] = 0;
      aiStack_78[1] = 4;
      iVar4 = FUN_ram_481371e6(iVar3,&stack0xffffff90,&local_80);
      if (iVar4 < 0) break;
      FUN_ram_48137530(2,&uStack_6c,&local_50,0x10);
      uVar2 = uStack_6e;
      uVar1 = uStack_6e >> 8;
      FUN_ram_481371ec(iVar3,0xfff,0x1008,aiStack_78,aiStack_78 + 1);
      iVar6 = iVar6 + 1;
      if (aiStack_78[0] == 1) {
        puVar5 = &DAT_ram_481c0570;
      }
      else {
        puVar5 = &DAT_ram_481bf88c;
        if (aiStack_78[0] == 2) {
          puVar5 = &DAT_ram_481c0574;
        }
      }
      FUN_ram_4819aaa0("%d\t%d:%s\t%16s:%d",iVar3,aiStack_78[0],puVar5,&local_50,uVar2 << 8 | uVar1)
      ;
      iVar4 = FUN_ram_481371e0(iVar3,&local_60,&uStack_7c);
      if (-1 < iVar4) {
        FUN_ram_48137530(2,&uStack_5c,&local_40,0x10);
        FUN_ram_4819aaa0("\t%16s:%d",&local_40,local_60._2_2_ << 8 | local_60._2_2_ >> 8);
      }
      FUN_ram_4819ab6a(10);
      iVar3 = iVar3 + 1;
      if (iVar3 == 0x40) goto LAB_ram_4802172c;
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 != 0x40);
LAB_ram_4802172c:
  FUN_ram_4819aaa0("Remaining sockets: %d\n",10 - iVar6);
  return 0;
}


