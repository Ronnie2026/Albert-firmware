/* Firmware entry: 0x48008120 */

void FUN_ram_48008120(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_2 == 0) {
    uVar3 = 0;
    iVar2 = param_1 << 3;
  }
  else {
    iVar2 = param_1 * 8;
    uVar3 = 0;
    if (-1 < *(int *)(&DAT_ram_4ff4823c + param_1 * 0x38)) {
      FUN_ram_4812a72e();
      if (param_1 == 5) {
        FUN_ram_4812c3fe(DAT_ram_4ff48354);
      }
      FUN_ram_4812bee8(*(undefined4 *)(&DAT_ram_4ff4823c + param_1 * 0x38));
      uVar3 = 0;
      if ((int)(*(uint *)(&DAT_ram_4ff4823c + param_1 * 0x38) - 0x20) < 0) {
        uVar3 = 1 << (*(uint *)(&DAT_ram_4ff4823c + param_1 * 0x38) & 0x1f);
      }
      *(undefined4 *)(&DAT_ram_4ff4823c + param_1 * 0x38) = 0xffffffff;
    }
  }
  if ((param_3 != 0) && (-1 < *(int *)(&DAT_ram_4ff48240 + (iVar2 - param_1) * 8))) {
    if (param_1 == 5) {
      FUN_ram_4812c6d8(0x30,DAT_ram_48235e00 >> 0x14,0);
      FUN_ram_4812c3fe(DAT_ram_4ff48358);
    }
    else {
      gpio_matrix_in(0x3f,*(uint *)(&DAT_ram_48235d9c + param_1 * 0x14) >> 0x14,0);
    }
    iVar4 = (iVar2 - param_1) * 8;
    FUN_ram_4812bee8(*(undefined4 *)(&DAT_ram_4ff48240 + iVar4));
    if ((int)(*(uint *)(&DAT_ram_4ff48240 + iVar4) - 0x20) < 0) {
      uVar1 = 1 << (*(uint *)(&DAT_ram_4ff48240 + iVar4) & 0x1f);
    }
    else {
      uVar1 = 0;
    }
    uVar3 = uVar3 | uVar1;
    *(undefined4 *)(&DAT_ram_4ff48240 + (iVar2 - param_1) * 8) = 0xffffffff;
  }
  if (param_4 != 0) {
    if (-1 < *(int *)(&DAT_ram_4ff48244 + (iVar2 - param_1) * 8)) {
      FUN_ram_4812a72e();
      if (param_1 == 5) {
        FUN_ram_4812c3fe(DAT_ram_4ff4835c);
      }
      if ((int)(*(uint *)(&DAT_ram_4ff48244 + (iVar2 - param_1) * 8) - 0x20) < 0) {
        uVar1 = 1 << (*(uint *)(&DAT_ram_4ff48244 + (iVar2 - param_1) * 8) & 0x1f);
      }
      else {
        uVar1 = 0;
      }
      uVar3 = uVar3 | uVar1;
      *(undefined4 *)(&DAT_ram_4ff48244 + (iVar2 - param_1) * 8) = 0xffffffff;
    }
  }
  if ((param_5 == 0) || (*(int *)(&DAT_ram_4ff48248 + (iVar2 - param_1) * 8) < 0))
  goto LAB_ram_48008236;
  if (param_1 == 5) {
    FUN_ram_4812c6d8(0x20,DAT_ram_48235e08 >> 0x14,0);
    FUN_ram_4812c3fe(DAT_ram_4ff48360);
    uVar1 = *(uint *)(&DAT_ram_4ff48248 + (iVar2 + -5) * 8);
    if ((int)(uVar1 - 0x20) < 0) goto LAB_ram_4800834c;
LAB_ram_48008224:
    uVar1 = 0;
  }
  else {
    gpio_matrix_in(0x3e,*(uint *)(&DAT_ram_48235da4 + param_1 * 0x14) >> 0x14,0);
    uVar1 = *(uint *)(&DAT_ram_4ff48248 + (iVar2 - param_1) * 8);
    if (-1 < (int)(uVar1 - 0x20)) goto LAB_ram_48008224;
LAB_ram_4800834c:
    uVar1 = 1 << (uVar1 & 0x1f);
  }
  uVar3 = uVar3 | uVar1;
  *(undefined4 *)(&DAT_ram_4ff48248 + (iVar2 - param_1) * 8) = 0xffffffff;
LAB_ram_48008236:
  iVar2 = (iVar2 - param_1) * 8;
  FUN_ram_481333d4(*(uint *)(&DAT_ram_4ff48250 + iVar2) & uVar3,0);
  *(undefined4 *)(&DAT_ram_4ff48254 + iVar2) = 0;
  *(uint *)(&DAT_ram_4ff48250 + iVar2) = *(uint *)(&DAT_ram_4ff48250 + iVar2) & ~uVar3;
  return;
}


