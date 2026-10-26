/* Firmware entry: 0x4ff2e8c4 */

void FUN_ram_4ff2e8c4(int param_1)

{
  uint uVar1;
  uint uVar2;
  code *pcVar3;
  int iVar4;
  uint uStack_1c;
  uint uStack_18;
  uint uStack_14;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uStack_1c = 0;
  uVar1 = FUN_ram_4ff42d22(*(undefined4 *)(param_1 + 0x40));
  if ((uVar1 & 0x180) != 0) {
    iVar4 = *(int *)(param_1 + 0x80);
    pcVar3 = *(code **)(param_1 + 0x70);
    uStack_18 = *(uint *)(*(int *)(param_1 + 0x40) + 0x10);
    *(undefined4 *)(*(int *)(param_1 + 0x40) + 0x10) = 0;
    *(int *)(param_1 + 0x80) = iVar4 + 1;
    if (pcVar3 != (code *)0x0) {
      uVar2 = (*pcVar3)(param_1,&uStack_18,*(undefined4 *)(param_1 + 0x74));
      uStack_1c = uStack_1c | uVar2;
    }
  }
  if ((uVar1 & 0x69) != 0) {
    uStack_14 = 3;
    if (((uVar1 & 1) == 0) && (uStack_14 = 2, (uVar1 & 0x20) == 0)) {
      uStack_14 = uVar1 >> 3 & 1;
    }
    fence();
    uStack_18 = *(uint *)(param_1 + 0x7c);
    fence();
    fence();
    *(uint *)(param_1 + 0x7c) = uStack_14;
    fence();
    if (*(code **)(param_1 + 0x6c) != (code *)0x0) {
      uVar2 = (**(code **)(param_1 + 0x6c))(param_1,&uStack_18,*(undefined4 *)(param_1 + 0x74));
      uStack_1c = uStack_1c | uVar2;
    }
    if ((uStack_18 == 3) && (uStack_14 == 0)) {
      iVar4 = FUN_ram_4ff3b8f0(*(undefined4 *)(param_1 + 0x4c),param_1 + 0x88,&uStack_1c);
      fence();
      if (iVar4 == 0) {
        *(undefined1 *)(param_1 + 0x84) = 0;
        fence();
        FUN_ram_4ff40084(*(undefined4 *)(param_1 + 0x50),1,&uStack_1c);
      }
      else {
        *(undefined1 *)(param_1 + 0x84) = 1;
        fence();
        FUN_ram_4ff2e87a(*(undefined4 *)(param_1 + 0x40),*(undefined4 *)(param_1 + 0x88));
      }
    }
  }
  if ((uVar1 & 0x200) != 0) {
    while (iVar4 = FUN_ram_4ff42e8a(*(undefined4 *)(param_1 + 0x40)), iVar4 != 0) {
      iVar4 = FUN_ram_4ff42f8e(*(undefined4 *)(param_1 + 0x40),param_1 + 0x8c);
      if (((iVar4 != 0) &&
          (iVar4 = FUN_ram_4ff43040(*(undefined4 *)(param_1 + 0x40),param_1 + 0x8c), iVar4 != 0)) &&
         (*(int *)(param_1 + 0x68) != 0)) {
        fence();
        *(undefined1 *)(param_1 + 0x85) = 1;
        fence();
        uVar2 = (**(code **)(param_1 + 0x68))(param_1,&uStack_18,*(undefined4 *)(param_1 + 0x74));
        uStack_1c = uStack_1c | uVar2;
        fence();
        *(undefined1 *)(param_1 + 0x85) = 0;
        fence();
      }
    }
  }
  if ((uVar1 & 0x400) != 0) {
    if (*(code **)(param_1 + 100) != (code *)0x0) {
      uStack_14 = *(uint *)(param_1 + 0x88);
      uStack_18 = CONCAT31(uStack_18._1_3_,(char)(uVar1 >> 0xc)) & 0xffffff01;
      uVar1 = (**(code **)(param_1 + 100))(param_1,&uStack_18,*(undefined4 *)(param_1 + 0x74));
      uStack_1c = uStack_1c | uVar1;
    }
    fence();
    fence();
    if ((*(int *)(param_1 + 0x7c) == 3) ||
       (iVar4 = FUN_ram_4ff3b8f0(*(undefined4 *)(param_1 + 0x4c),param_1 + 0x88,&uStack_1c),
       iVar4 == 0)) {
      fence();
      *(undefined1 *)(param_1 + 0x84) = 0;
      fence();
      fence();
      fence();
      if (*(int *)(param_1 + 0x7c) != 3) {
        FUN_ram_4ff40084(*(undefined4 *)(param_1 + 0x50),1,&uStack_1c);
      }
    }
    else {
      fence();
      fence();
      if (*(char *)(param_1 + 0x84) == '\0') {
                    /* WARNING: Subroutine does not return */
        FUN_ram_4ff44e88(s____build_p164_v32_esp_idf_esp_dr_ram_4ff575d0 + 0x2a,0x127,
                         s__node_isr_main_ram_4ff53638,s_twai_ctx_>hw_busy_ram_4ff57a48);
      }
      FUN_ram_4ff2e87a(*(undefined4 *)(param_1 + 0x40),*(undefined4 *)(param_1 + 0x88));
    }
  }
  if (uStack_1c != 0) {
    FUN_ram_4ff3f038();
    return;
  }
  return;
}


