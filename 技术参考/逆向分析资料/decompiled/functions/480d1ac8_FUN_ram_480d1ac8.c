/* Firmware entry: 0x480d1ac8 */

int FUN_ram_480d1ac8(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined1 uVar5;
  byte bVar6;
  char *pcVar7;
  int iVar8;
  char cStack_555;
  int iStack_554;
  int iStack_550;
  int iStack_54c;
  int aiStack_548 [18];
  undefined1 uStack_500;
  byte bStack_4c0;
  undefined4 local_4b8 [284];
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  *(undefined4 *)(param_1 + 0x550) = 0;
  *(undefined4 *)(param_1 + 0x5b4) = 0;
  *(undefined4 *)(param_1 + 0x5b8) = 0;
  *(undefined2 *)(param_1 + 0x5bc) = 0;
  *(undefined1 **)(param_1 + 0x5c0) = &DAT_ram_481df390;
  memset(aiStack_548,0,0x528);
  aiStack_548[1] = 1;
  iVar1 = FUN_ram_480ce710(param_1 + 4,aiStack_548);
  if (iVar1 == 0) {
    if (*(char *)(param_1 + 0x13) == '\x05') {
      pcVar7 = "load_io";
    }
    else {
      pcVar7 = "load_corrupt";
    }
    goto LAB_ram_480d1d2c;
  }
  iVar8 = param_1 + 0x18;
  FUN_ram_4ff45158(iVar8,aiStack_548,0x524);
  iVar1 = aiStack_548[0];
  *(undefined1 *)(param_1 + 0x5bb) = 1;
  *(undefined1 *)(param_1 + 0x5b5) = 1;
  uVar5 = 0;
  if (*(char *)(param_1 + 0x10) != '\0') {
    uVar5 = *(undefined1 *)(param_1 + 0x11);
  }
  *(undefined1 *)(param_1 + 0x5b6) = uVar5;
  iStack_554 = uStack_48;
  iStack_550 = uStack_44;
  iStack_54c = uStack_40;
  if (*(code **)(param_1 + 0x540) != (code *)0x0) {
    (**(code **)(param_1 + 0x540))(aiStack_548,0);
  }
  if (((iStack_554 == uStack_48) && (iStack_550 == uStack_44)) && (iStack_54c == uStack_40)) {
LAB_ram_480d1bb6:
    iVar1 = FUN_ram_48060b1c(aiStack_548);
    if (iVar1 != 0) {
      *(int *)(param_1 + 0x544) = aiStack_548[0];
      FUN_ram_4ff45158(iVar8,aiStack_548,0x524);
      *(undefined4 *)(param_1 + 0x548) = 0;
      *(undefined1 *)(param_1 + 0x5b8) = 0;
      *(undefined1 *)(param_1 + 0x5be) = uStack_500;
      *(undefined1 *)(param_1 + 0x5bb) = 1;
      *(undefined1 *)(param_1 + 0x5bd) = 1;
      if (bStack_4c0 == 0) {
        *(undefined4 *)(param_1 + 0x554) = 0;
        *(undefined1 *)(param_1 + 0x5ba) = 0;
        *(undefined1 *)(param_1 + 0x5b4) = 0;
        *(undefined1 *)(param_1 + 0x558) = 0;
        *(undefined1 *)(param_1 + 0x559) = 0;
        *(undefined1 *)(param_1 + 0x55a) = 0;
        *(undefined1 *)(param_1 + 0x55b) = 0;
        *(undefined1 *)(param_1 + 0x55c) = 0;
        *(undefined1 *)(param_1 + 0x55d) = 0;
        *(undefined1 *)(param_1 + 0x55e) = 0;
        *(undefined1 *)(param_1 + 0x55f) = 0;
        *(undefined1 *)(param_1 + 0x560) = 0;
        *(undefined1 *)(param_1 + 0x561) = 0;
        *(undefined1 *)(param_1 + 0x562) = 0;
        *(undefined1 *)(param_1 + 0x563) = 0;
        memset((void *)(param_1 + 0x564),0,0x50);
        if (*(char *)(param_1 + 0x10) == '\0') {
          return iVar1;
        }
        *(undefined1 *)(param_1 + 0x5b4) = 0;
        *(undefined1 *)(param_1 + 0x558) = (undefined1)uStack_48;
        *(undefined1 *)(param_1 + 0x559) = uStack_48._1_1_;
        *(undefined1 *)(param_1 + 0x55a) = uStack_48._2_1_;
        *(undefined1 *)(param_1 + 0x55b) = uStack_48._3_1_;
        *(undefined1 *)(param_1 + 0x55c) = (undefined1)uStack_44;
        *(undefined1 *)(param_1 + 0x55d) = uStack_44._1_1_;
        *(undefined1 *)(param_1 + 0x55e) = uStack_44._2_1_;
        *(undefined1 *)(param_1 + 0x55f) = uStack_44._3_1_;
        *(undefined1 *)(param_1 + 0x560) = (undefined1)uStack_40;
        *(undefined1 *)(param_1 + 0x561) = uStack_40._1_1_;
        *(undefined1 *)(param_1 + 0x562) = uStack_40._2_1_;
        *(undefined1 *)(param_1 + 0x563) = uStack_40._3_1_;
      }
      else {
        *(undefined1 *)(param_1 + 0x5ba) = 0;
        *(undefined1 *)(param_1 + 0x5b4) = 0;
        *(undefined4 *)(param_1 + 0x554) = local_4b8[0];
        *(undefined1 *)(param_1 + 0x558) = 0;
        *(undefined1 *)(param_1 + 0x559) = 0;
        *(undefined1 *)(param_1 + 0x55a) = 0;
        *(undefined1 *)(param_1 + 0x55b) = 0;
        *(undefined1 *)(param_1 + 0x55c) = 0;
        *(undefined1 *)(param_1 + 0x55d) = 0;
        *(undefined1 *)(param_1 + 0x55e) = 0;
        *(undefined1 *)(param_1 + 0x55f) = 0;
        *(undefined1 *)(param_1 + 0x560) = 0;
        *(undefined1 *)(param_1 + 0x561) = 0;
        *(undefined1 *)(param_1 + 0x562) = 0;
        *(undefined1 *)(param_1 + 0x563) = 0;
        puVar3 = memset((void *)(param_1 + 0x564),0,0x50);
        if (*(char *)(param_1 + 0x10) == '\0') {
          return iVar1;
        }
        *(undefined1 *)(param_1 + 0x561) = uStack_40._1_1_;
        *(undefined1 *)(param_1 + 0x563) = uStack_40._3_1_;
        *(undefined1 *)(param_1 + 0x558) = (undefined1)uStack_48;
        *(undefined1 *)(param_1 + 0x559) = uStack_48._1_1_;
        *(undefined1 *)(param_1 + 0x55a) = uStack_48._2_1_;
        *(undefined1 *)(param_1 + 0x55b) = uStack_48._3_1_;
        *(undefined1 *)(param_1 + 0x55c) = (undefined1)uStack_44;
        *(undefined1 *)(param_1 + 0x55d) = uStack_44._1_1_;
        *(undefined1 *)(param_1 + 0x55e) = uStack_44._2_1_;
        *(undefined1 *)(param_1 + 0x55f) = uStack_44._3_1_;
        *(undefined1 *)(param_1 + 0x560) = (undefined1)uStack_40;
        *(undefined1 *)(param_1 + 0x562) = uStack_40._2_1_;
        if (0x14 < bStack_4c0) {
          bStack_4c0 = 0x14;
        }
        *(byte *)(param_1 + 0x5b4) = bStack_4c0;
        puVar4 = local_4b8;
        bVar6 = 0;
        do {
          bVar6 = bVar6 + 1;
          *puVar3 = *puVar4;
          puVar4 = puVar4 + 0xe;
          puVar3 = puVar3 + 1;
        } while (bVar6 < bStack_4c0);
      }
      *(undefined1 *)(param_1 + 0x5ba) = 1;
      return iVar1;
    }
  }
  else {
    aiStack_548[0] = aiStack_548[0] + 1;
    iVar2 = FUN_ram_480d175e(param_1,aiStack_548);
    if ((iVar2 != 0) && (iVar2 = FUN_ram_480d18ce(param_1 + 4,aiStack_548), iVar2 != 0)) {
      FUN_ram_4ff45158(iVar8,aiStack_548,0x524);
      *(undefined1 *)(param_1 + 0x5bb) = 1;
      iVar2 = FUN_ram_480b063e();
      iVar1 = DAT_ram_4ff6dcdc;
      if (iVar2 == 0) {
        *(undefined1 *)(param_1 + 0x5b6) = 0;
      }
      else {
        FUN_ram_4ff45158(DAT_ram_4ff6dcdc + 0x22540,aiStack_548,0x524);
        *(undefined1 *)(iVar1 + 0x41112) = 1;
        cStack_555 = '\0';
        iVar2 = FUN_ram_480b1222(iVar1 + 0x30,aiStack_548,FUN_ram_480b356e,&cStack_555);
        if (iVar2 == 0) {
          *(undefined1 *)(iVar1 + 0x41111) = 0;
          *(char **)(iVar1 + 0x41114) = "outbox_full_or_invalid";
          *(undefined1 *)(param_1 + 0x5b6) = 0;
        }
        else if (cStack_555 == '\0') {
          *(undefined1 *)(param_1 + 0x5b6) = 0;
        }
        else {
          FUN_ram_480b0ed4();
          *(undefined1 *)(param_1 + 0x5b6) = 0;
        }
      }
      goto LAB_ram_480d1bb6;
    }
    uStack_48 = iStack_554;
    uStack_44 = iStack_550;
    uStack_40 = iStack_54c;
    aiStack_548[0] = iVar1;
    iVar1 = FUN_ram_48060b1c(aiStack_548);
    if (iVar1 != 0) {
      *(int *)(param_1 + 0x544) = aiStack_548[0];
      FUN_ram_4ff45158(iVar8,aiStack_548,0x524);
      *(undefined4 *)(param_1 + 0x548) = 0;
      *(undefined4 *)(param_1 + 0x54c) = 0;
      *(undefined4 *)(param_1 + 0x550) = 0;
      *(undefined **)(param_1 + 0x5b8) = &sedeleg;
      *(undefined1 *)(param_1 + 0x5be) = uStack_500;
      *(undefined1 *)(param_1 + 0x5bb) = 1;
      *(undefined1 *)(param_1 + 0x5b7) = 1;
      *(undefined1 *)(param_1 + 0x5bd) = 1;
      if (bStack_4c0 == 0) {
        *(undefined4 *)(param_1 + 0x554) = 0;
        *(undefined1 *)(param_1 + 0x5ba) = 0;
        *(undefined1 *)(param_1 + 0x5b4) = 0;
        *(undefined1 *)(param_1 + 0x558) = 0;
        *(undefined1 *)(param_1 + 0x559) = 0;
        *(undefined1 *)(param_1 + 0x55a) = 0;
        *(undefined1 *)(param_1 + 0x55b) = 0;
        *(undefined1 *)(param_1 + 0x55c) = 0;
        *(undefined1 *)(param_1 + 0x55d) = 0;
        *(undefined1 *)(param_1 + 0x55e) = 0;
        *(undefined1 *)(param_1 + 0x55f) = 0;
        *(undefined1 *)(param_1 + 0x560) = 0;
        *(undefined1 *)(param_1 + 0x561) = 0;
        *(undefined1 *)(param_1 + 0x562) = 0;
        *(undefined1 *)(param_1 + 0x563) = 0;
        memset((void *)(param_1 + 0x564),0,0x50);
        if (*(char *)(param_1 + 0x10) != '\0') {
          *(undefined1 *)(param_1 + 0x5b4) = 0;
          *(undefined1 *)(param_1 + 0x558) = (undefined1)uStack_48;
          *(undefined1 *)(param_1 + 0x559) = uStack_48._1_1_;
          *(undefined1 *)(param_1 + 0x55a) = uStack_48._2_1_;
          *(undefined1 *)(param_1 + 0x55b) = uStack_48._3_1_;
          *(undefined1 *)(param_1 + 0x55c) = (undefined1)uStack_44;
          *(undefined1 *)(param_1 + 0x55d) = uStack_44._1_1_;
          *(undefined1 *)(param_1 + 0x55e) = uStack_44._2_1_;
          *(undefined1 *)(param_1 + 0x55f) = uStack_44._3_1_;
          *(undefined1 *)(param_1 + 0x560) = (undefined1)uStack_40;
          *(undefined1 *)(param_1 + 0x561) = uStack_40._1_1_;
          *(undefined1 *)(param_1 + 0x562) = uStack_40._2_1_;
          *(undefined1 *)(param_1 + 0x563) = uStack_40._3_1_;
          goto LAB_ram_480d1e8e;
        }
      }
      else {
        *(undefined1 *)(param_1 + 0x5ba) = 0;
        *(undefined1 *)(param_1 + 0x5b4) = 0;
        *(undefined4 *)(param_1 + 0x554) = local_4b8[0];
        *(undefined1 *)(param_1 + 0x558) = 0;
        *(undefined1 *)(param_1 + 0x559) = 0;
        *(undefined1 *)(param_1 + 0x55a) = 0;
        *(undefined1 *)(param_1 + 0x55b) = 0;
        *(undefined1 *)(param_1 + 0x55c) = 0;
        *(undefined1 *)(param_1 + 0x55d) = 0;
        *(undefined1 *)(param_1 + 0x55e) = 0;
        *(undefined1 *)(param_1 + 0x55f) = 0;
        *(undefined1 *)(param_1 + 0x560) = 0;
        *(undefined1 *)(param_1 + 0x561) = 0;
        *(undefined1 *)(param_1 + 0x562) = 0;
        *(undefined1 *)(param_1 + 0x563) = 0;
        puVar3 = memset((void *)(param_1 + 0x564),0,0x50);
        if (*(char *)(param_1 + 0x10) != '\0') {
          *(undefined1 *)(param_1 + 0x561) = uStack_40._1_1_;
          *(undefined1 *)(param_1 + 0x563) = uStack_40._3_1_;
          *(undefined1 *)(param_1 + 0x558) = (undefined1)uStack_48;
          *(undefined1 *)(param_1 + 0x559) = uStack_48._1_1_;
          *(undefined1 *)(param_1 + 0x55a) = uStack_48._2_1_;
          *(undefined1 *)(param_1 + 0x55b) = uStack_48._3_1_;
          *(undefined1 *)(param_1 + 0x55c) = (undefined1)uStack_44;
          *(undefined1 *)(param_1 + 0x55d) = uStack_44._1_1_;
          *(undefined1 *)(param_1 + 0x55e) = uStack_44._2_1_;
          *(undefined1 *)(param_1 + 0x55f) = uStack_44._3_1_;
          *(undefined1 *)(param_1 + 0x560) = (undefined1)uStack_40;
          *(undefined1 *)(param_1 + 0x562) = uStack_40._2_1_;
          if (0x14 < bStack_4c0) {
            bStack_4c0 = 0x14;
          }
          *(byte *)(param_1 + 0x5b4) = bStack_4c0;
          puVar4 = local_4b8;
          bVar6 = 0;
          do {
            bVar6 = bVar6 + 1;
            *puVar3 = *puVar4;
            puVar4 = puVar4 + 0xe;
            puVar3 = puVar3 + 1;
          } while (bVar6 < bStack_4c0);
LAB_ram_480d1e8e:
          *(undefined1 *)(param_1 + 0x5ba) = 1;
        }
      }
      pcVar7 = "identity_write_failed";
      goto LAB_ram_480d1d2c;
    }
  }
  *(undefined1 *)(param_1 + 0x5b5) = 0;
  pcVar7 = "restore_failed";
LAB_ram_480d1d2c:
  *(char **)(param_1 + 0x5c0) = pcVar7;
  return 0;
}


