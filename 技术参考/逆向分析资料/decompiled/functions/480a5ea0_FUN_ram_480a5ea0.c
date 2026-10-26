/* Firmware entry: 0x480a5ea0 */

undefined4 FUN_ram_480a5ea0(int param_1,int param_2)

{
  undefined **ppuVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined *puVar7;
  int *piVar8;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar2 = FUN_ram_48129d0c();
  if (iVar2 == 0) {
    return 0;
  }
  for (piVar8 = *(int **)(param_1 + 8); piVar8 != (int *)0x0; piVar8 = (int *)*piVar8) {
    iVar2 = piVar8[8];
    if (iVar2 == 0) {
      return 0;
    }
    ppuVar1 = &PTR_s_ambientEnabled_ram_481c51ec_ram_48222830;
    while( true ) {
      puVar7 = *ppuVar1;
      ppuVar1 = ppuVar1 + 1;
      iVar3 = FUN_ram_4ff453ae(iVar2,puVar7);
      if (iVar3 == 0) break;
      if (ppuVar1 == &PTR_s_enabled_ram_481ccbd8_8_ram_4822287c) {
        return 0;
      }
    }
  }
  uVar4 = FUN_ram_48129c8a(param_1,"ambientEnabled");
  iVar2 = FUN_ram_48129cb4();
  if (iVar2 != 0) {
    iVar2 = FUN_ram_48129ca2(uVar4);
    *(bool *)param_2 = iVar2 != 0;
    uVar4 = FUN_ram_48129c8a(param_1,"fsdCueEnabled");
    iVar2 = FUN_ram_48129cb4();
    if (iVar2 != 0) {
      iVar2 = FUN_ram_48129ca2(uVar4);
      *(bool *)(param_2 + 1) = iVar2 != 0;
      uVar4 = FUN_ram_48129c8a(param_1,"blindSpotEnabled");
      iVar2 = FUN_ram_48129cb4();
      if (iVar2 != 0) {
        iVar2 = FUN_ram_48129ca2(uVar4);
        *(bool *)(param_2 + 2) = iVar2 != 0;
        iVar2 = FUN_ram_480a4d0a(param_1,"blindSpotBrightness",0xff,0,param_2 + 3);
        if (((((((iVar2 != 0) &&
                (iVar2 = FUN_ram_480a4d0a(param_1,"blindSpotAreas",0xff,0,param_2 + 4), iVar2 != 0))
               && (iVar2 = FUN_ram_480a4e2a(param_1,"blindSpotRestoreDelayMs",0xffff,0,param_2 + 6),
                  iVar2 != 0)) &&
              ((iVar2 = FUN_ram_4807806e(param_1,"turnFollowEnabled",param_2 + 8), iVar2 != 0 &&
               (iVar2 = FUN_ram_4807806e(param_1,"turnFollowHazards",param_2 + 9), iVar2 != 0)))) &&
             ((iVar2 = FUN_ram_480a4d0a(param_1,"turnFollowBrightness",0xff,0,param_2 + 10),
              iVar2 != 0 &&
              ((iVar2 = FUN_ram_480a4d0a(param_1,"turnFollowAreas",0xff,0,param_2 + 0xb), iVar2 != 0
               && (iVar2 = FUN_ram_480783ec(param_1,"turnFollowColor",param_2 + 0xc,param_2 + 0xd,
                                            param_2 + 0xe), iVar2 != 0)))))) &&
            (iVar2 = FUN_ram_4807806e(param_1,"welcomeEnabled",param_2 + 0xf), iVar2 != 0)) &&
           ((((iVar2 = FUN_ram_480a4d0a(param_1,"welcomeStyle",0xff,0,param_2 + 0x10), iVar2 != 0 &&
              (iVar2 = FUN_ram_480a4d0a(param_1,"welcomeTriggerMode",0xff,0,param_2 + 0x11),
              iVar2 != 0)) &&
             (iVar2 = FUN_ram_480a4d0a(param_1,"welcomeBrightness",0xff,0,param_2 + 0x12),
             iVar2 != 0)) &&
            (((iVar2 = FUN_ram_480a4d0a(param_1,"welcomeTempo",0xff,0,param_2 + 0x13), iVar2 != 0 &&
              (iVar2 = FUN_ram_480a4d0a(param_1,"welcomeZoneMask",0xff,0,param_2 + 0x14), iVar2 != 0
              )) && (iVar2 = FUN_ram_480783ec(param_1,"welcomeColor",param_2 + 0x15,param_2 + 0x16,
                                              param_2 + 0x17), iVar2 != 0)))))) {
          uVar4 = FUN_ram_48129c8a(param_1,"zones");
          iVar2 = FUN_ram_48129cfa();
          if ((iVar2 != 0) && (iVar2 = FUN_ram_48129c58(uVar4), iVar2 == 6)) {
            iVar2 = param_2 + 0x1c;
            iVar3 = 0;
            while( true ) {
              uVar5 = FUN_ram_48129c6e(uVar4,iVar3);
              iVar6 = FUN_ram_48077fd8(uVar5,&PTR_s_enabled_ram_481ccbd8_8_ram_4822281c,5);
              if (iVar6 == 0) {
                return 0;
              }
              iVar6 = FUN_ram_4807806e(uVar5,"enabled",iVar2 + -4);
              if (iVar6 == 0) {
                return 0;
              }
              iVar6 = FUN_ram_480a4d0a(uVar5,"brightness",0xff,0,iVar2 + -3);
              if (iVar6 == 0) {
                return 0;
              }
              iVar6 = FUN_ram_480a4d0a(uVar5,"red",0xff,0,iVar2 + -2);
              if (iVar6 == 0) break;
              iVar6 = FUN_ram_480a4d0a(uVar5,"green",0xff,0,iVar2 + -1);
              if (iVar6 == 0) {
                return 0;
              }
              iVar6 = FUN_ram_480a4d0a(uVar5,&DAT_ram_481c5364,0xff,0,iVar2);
              iVar3 = iVar3 + 1;
              if (iVar6 == 0) {
                return 0;
              }
              iVar2 = iVar2 + 5;
              if (iVar3 == 6) {
                uVar4 = FUN_ram_4804162c(param_2);
                return uVar4;
              }
            }
            return 0;
          }
        }
      }
    }
  }
  return 0;
}


