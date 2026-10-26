/* Firmware entry: 0x48122c00 */

undefined4
FUN_ram_48122c00(undefined1 *param_1,uint param_2,int param_3,undefined4 param_4,int param_5)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined8 uVar8;
  undefined1 auStack_88 [88];
  undefined1 auStack_30 [28];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  param_1[0xbc] = param_5 != 0;
  *(undefined4 *)(param_1 + 0xb8) = param_4;
  FUN_ram_48122b98();
  *param_1 = 0;
  FUN_ram_4802ad02(param_1 + 0x38,&DAT_ram_4ff5bb88);
  memset(auStack_88,0,0x68);
  memset(param_1 + 0x50,0,0x58);
  FUN_ram_4ff45158(param_1 + 0xa8,auStack_30,0x10);
  if (param_2 == 0) {
    *param_1 = 5;
    return 0;
  }
  if (param_3 == 0) {
    iVar2 = FUN_ram_4812d7fc(0);
    *(int *)(param_1 + 0x34) = iVar2;
    if ((iVar2 != 0) && (iVar3 = FUN_ram_4812d062(), iVar2 != iVar3)) {
      iVar2 = *(int *)(param_1 + 0x34);
      goto LAB_ram_48122c9e;
    }
LAB_ram_48122d76:
    *param_1 = 10;
  }
  else {
    if (param_3 == 0x65) {
      iVar2 = FUN_ram_4812e1d6(1,0x82,0);
      *(int *)(param_1 + 0x34) = iVar2;
joined_r0x48122db6:
      if (iVar2 == 0) goto LAB_ram_48122d76;
    }
    else {
      if (param_3 == 0x66) {
        iVar2 = FUN_ram_4812e1d6(1,0x81,0);
        *(int *)(param_1 + 0x34) = iVar2;
        goto joined_r0x48122db6;
      }
      if (param_3 == 0x67) {
        iVar2 = FUN_ram_4812e1d6(1,0x83,0);
        *(int *)(param_1 + 0x34) = iVar2;
        goto joined_r0x48122db6;
      }
      if (param_3 != 100) {
        *param_1 = 0xb;
        uVar8 = FUN_ram_4ff21a0a();
        uVar5 = FUN_ram_48025e50(
                                "./managed_components/espressif__arduino-esp32/libraries/Update/src/Updater.cpp"
                                );
        uVar6 = __udivdi3((int)uVar8,(int)((ulonglong)uVar8 >> 0x20),1000,0);
        FUN_ram_48027528("[%6u][E][%s:%u] %s(): bad command %u\r\n",uVar6,uVar5,0x114,"begin",
                         param_3);
        return 0;
      }
      iVar2 = FUN_ram_4812e1d6(1,0x82,0);
      *(int *)(param_1 + 0x34) = iVar2;
      if (iVar2 == 0) {
        iVar2 = FUN_ram_4812e1d6(1,0x81,0);
        *(int *)(param_1 + 0x34) = iVar2;
        if (iVar2 == 0) {
          iVar2 = FUN_ram_4812e1d6(1,0x83,0);
          *(int *)(param_1 + 0x34) = iVar2;
          goto joined_r0x48122db6;
        }
      }
    }
LAB_ram_48122c9e:
    uVar7 = *(uint *)(iVar2 + 0x10);
    if ((param_2 == 0xffffffff) || (bVar1 = param_2 <= uVar7, uVar7 = param_2, bVar1)) {
      iVar2 = FUN_ram_48194ed0(0x1000,&DAT_ram_4823acc0);
      *(int *)(param_1 + 0xc) = iVar2;
      if (iVar2 != 0) {
        *(uint *)(param_1 + 0x18) = uVar7;
        *(int *)(param_1 + 0x30) = param_3;
        FUN_ram_4802a33e(param_1 + 0x4c);
        return 1;
      }
      uVar8 = FUN_ram_4ff21a0a();
      uVar5 = FUN_ram_48025e50(
                              "./managed_components/espressif__arduino-esp32/libraries/Update/src/Updater.cpp"
                              );
      uVar6 = __udivdi3((int)uVar8,(int)((ulonglong)uVar8 >> 0x20),1000,0);
      FUN_ram_48027528("[%6u][E][%s:%u] %s(): _buffer allocation failed\r\n",uVar6,uVar5,0x123,
                       "begin");
    }
    else {
      *param_1 = 5;
      uVar8 = FUN_ram_4ff21a0a();
      uVar6 = FUN_ram_48025e50(
                              "./managed_components/espressif__arduino-esp32/libraries/Update/src/Updater.cpp"
                              );
      uVar5 = *(undefined4 *)(*(int *)(param_1 + 0x34) + 0x10);
      uVar4 = __udivdi3((int)uVar8,(int)((ulonglong)uVar8 >> 0x20),1000,0);
      FUN_ram_48027528("[%6u][E][%s:%u] %s(): too large %u > %u\r\n",uVar4,uVar6,0x11c,"begin",
                       param_2,uVar5);
    }
  }
  return 0;
}


