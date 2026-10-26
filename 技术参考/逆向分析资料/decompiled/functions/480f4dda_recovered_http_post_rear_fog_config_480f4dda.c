/* Firmware entry: 0x480f4dda */

/* HTTP callback entry recovered from 0x480868b2. Name assigned by analyst. */

void recovered_http_post_rear_fog_config_480f4dda(void)

{
  char cVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined2 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 uStack_4c;
  undefined8 uStack_48;
  int aiStack_40 [2];
  int iStack_38;
  byte bStack_31;
  int iStack_30;
  undefined1 *puStack_2c;
  
  iVar6 = DAT_ram_4ff5cbe8;
  iVar5 = DAT_ram_4ff5cbdc;
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  fence();
  fence();
  if (DAT_ram_4ff6df30 != '\0') {
    uStack_48._0_4_ = "{\"ok\":false,\"error\":\"ota_busy\"}";
    uStack_4c = 0x199;
    aiStack_40[0] = 0x1f;
    cVar1 = *(char *)(DAT_ram_4ff5cbdc * 0x1d40 + DAT_ram_4ff5cbe8 + 0x44c);
    if ((cVar1 != '\0') && (cVar1 != '\x06')) {
      iVar7 = 0x1f;
      if ((DAT_ram_4ff5cbc4 != (code *)0x0) && (DAT_ram_4ff5cbc8 == '\0')) {
        DAT_ram_4ff5cbc8 = 1;
        (*DAT_ram_4ff5cbc4)(&uStack_4c,&uStack_48,aiStack_40);
        DAT_ram_4ff5cbc8 = '\0';
        iVar7 = aiStack_40[0];
        if (aiStack_40[0] == 0) {
          iVar7 = 1;
        }
      }
      iVar7 = FUN_ram_4ff206d8(iVar7,0x404);
      iVar8 = iVar6 + iVar5 * 0x1d40;
      *(int *)(iVar8 + 0x1cdc) = iVar7;
      if (iVar7 == 0) {
        if (*(char *)(iVar8 + 0x44c) != '\0') {
          FUN_ram_48065e9c(iVar6 + iVar5 * 0x1d40 + 0x1c,7);
        }
      }
      else {
        if (aiStack_40[0] != 0) {
          FUN_ram_4ff45158(iVar7,(char *)uStack_48,aiStack_40[0]);
          iVar7 = *(int *)(iVar8 + 0x1cdc);
        }
        iStack_30 = DAT_ram_4ff5cbe8 + DAT_ram_4ff5cbdc * 0x1d40;
        if ((*(char *)(iStack_30 + 0x44c) != '\0') && (*(char *)(iStack_30 + 0x44c) != '\x06')) {
          *(int *)(iStack_30 + 0x1ce0) = iVar7;
          *(int *)(iStack_30 + 0x1ce4) = aiStack_40[0];
          *(undefined4 *)(iStack_30 + 0x1ce8) = 0;
          puStack_2c = &LAB_ram_4802d3f2;
          FUN_ram_48066484(&DAT_ram_4ff5cb9c,uStack_4c,"application/json",iStack_30,
                           &LAB_ram_4802d3f2);
        }
      }
      return;
    }
    return;
  }
  iVar5 = FUN_ram_48067a66();
  if (iVar5 == 0) {
    return;
  }
  uStack_48 = FUN_ram_4803165c();
  uVar2 = FUN_ram_48036a9a("enabled",(uint)uStack_48 & 0xff);
  uVar3 = uStack_48._1_1_;
  uStack_48._0_4_ = (char *)CONCAT31(uStack_48._1_3_,uVar2);
  uVar2 = FUN_ram_48036a9a("reverseWarningEnabled",uVar3);
  uVar3 = uStack_48._2_1_;
  uStack_48._0_2_ = CONCAT11(uVar2,(undefined1)uStack_48);
  uVar3 = FUN_ram_48036a9a("rearFogPilotEnabled",uVar3);
  uStack_48._0_3_ = CONCAT12(uVar3,(undefined2)uStack_48);
  uVar3 = FUN_ram_48036a9a("reverseRearFogSteadyEnabled",uStack_48._3_1_);
  uStack_48._0_4_ = (char *)CONCAT13(uVar3,(undefined3)uStack_48);
  uVar4 = FUN_ram_48036236("mildDecelCx100",uStack_48._4_4_ & 0xffff);
  uStack_48._4_4_ = CONCAT22(uStack_48._6_2_,uVar4);
  uVar4 = FUN_ram_48036236("hardDecelCx100",uStack_48._6_2_);
  uStack_48._4_4_ = CONCAT22(uVar4,uStack_48._4_2_);
  FUN_ram_480f4aca(&DAT_ram_4ff60e20,&uStack_48);
  if (DAT_ram_4ff6de6e == '\0') {
    iVar5 = FUN_ram_480316a0();
  }
  else {
    DAT_ram_4ff5ca68 = DAT_ram_4ff5ca68 + 1;
    DAT_ram_4ff6de94 = DAT_ram_4ff6de94 | 4;
    DAT_ram_4ff6de80 = DAT_ram_4ff6de80 + 1;
    iVar5 = FUN_ram_480ee046();
  }
  if (((DAT_ram_4ff6dd78 != '\0') && (iVar6 = FUN_ram_480aecea(), iVar5 != 0)) && (iVar6 != 0)) {
    FUN_ram_48054344(aiStack_40);
    if ((char)bStack_31 < '\0') {
      iVar5 = (bStack_31 & 0x7f) - 1;
    }
    else {
      iVar5 = -1;
      if (aiStack_40[0] != 0) {
        iVar5 = iStack_38 + -1;
      }
    }
    FUN_ram_4802b80a(aiStack_40,iVar5);
    FUN_ram_4802a8a8(&iStack_30,"stored");
    FUN_ram_4802f236(aiStack_40,"persistence",&iStack_30);
    FUN_ram_4802a59e(&iStack_30);
    FUN_ram_4802af5a(aiStack_40,0x7d);
    FUN_ram_4806acb0(&DAT_ram_4ff5cb9c,200,"application/json",aiStack_40);
    FUN_ram_4802a59e(aiStack_40);
    return;
  }
  FUN_ram_48066698(&DAT_ram_4ff5cb9c,500,"application/json",
                   "{\"ok\":false,\"error\":\"flash_write\"}",0x22);
  return;
}


