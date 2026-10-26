/* Firmware entry: 0x4800ff34 */

void FUN_ram_4800ff34(int param_1,char *param_2)

{
  char cVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  char cVar6;
  char cVar7;
  char cVar8;
  char cVar9;
  char cVar10;
  char cVar11;
  char cVar12;
  char cVar13;
  char cVar14;
  char cVar15;
  char cVar16;
  char cVar17;
  char cVar18;
  char cVar19;
  char cVar20;
  undefined4 uVar21;
  char *pcVar22;
  
  cVar20 = DAT_ram_481b59d8;
  cVar19 = DAT_ram_481b59d7;
  cVar18 = DAT_ram_481b59d6;
  cVar17 = DAT_ram_481b59d5;
  cVar16 = DAT_ram_481b59d4;
  cVar15 = DAT_ram_481b59d3;
  cVar14 = DAT_ram_481b59d2;
  cVar13 = DAT_ram_481b59d1;
  cVar12 = DAT_ram_481b59a7;
  cVar11 = DAT_ram_481b59a6;
  cVar10 = DAT_ram_481b59a5;
  cVar9 = DAT_ram_481b59a4;
  cVar8 = DAT_ram_481b59a3;
  cVar7 = DAT_ram_481b59a2;
  cVar6 = DAT_ram_481b59a1;
  cVar5 = DAT_ram_481b599d;
  cVar4 = DAT_ram_481b599c;
  cVar3 = DAT_ram_481b599b;
  cVar2 = DAT_ram_481b599a;
  cVar1 = DAT_ram_481b5999;
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 == 0xc) {
    *param_2 = DAT_ram_481b59a0;
    param_2[1] = cVar6;
    param_2[2] = cVar7;
    param_2[3] = cVar8;
    param_2[4] = cVar9;
    param_2[5] = cVar10;
    param_2[6] = cVar11;
    param_2[7] = cVar12;
    return;
  }
  if (param_1 < 0xd) {
    if (param_1 == 5) {
      pcVar22 = "esp32c3";
    }
    else if (param_1 < 6) {
      if (param_1 == 0) {
        *param_2 = DAT_ram_481b5998;
        param_2[1] = cVar1;
        param_2[2] = cVar2;
        param_2[3] = cVar3;
        param_2[4] = cVar4;
        param_2[5] = cVar5;
        return;
      }
      if (param_1 != 2) {
LAB_ram_480100da:
        uVar21 = FUN_ram_4ff44d14();
        FUN_ram_4ff44bf0(2,"transport","W (%lu) %s: Unsupported chip id: %u\n",uVar21,"transport",
                         param_1);
        cVar11 = s_unsupported_ram_481b5a04[0xb];
        cVar10 = s_unsupported_ram_481b5a04[10];
        cVar9 = s_unsupported_ram_481b5a04[9];
        cVar8 = s_unsupported_ram_481b5a04[8];
        cVar7 = s_unsupported_ram_481b5a04[7];
        cVar6 = s_unsupported_ram_481b5a04[6];
        cVar5 = s_unsupported_ram_481b5a04[5];
        cVar4 = s_unsupported_ram_481b5a04[4];
        cVar3 = s_unsupported_ram_481b5a04[3];
        cVar2 = s_unsupported_ram_481b5a04[2];
        cVar1 = s_unsupported_ram_481b5a04[1];
        *param_2 = s_unsupported_ram_481b5a04[0];
        param_2[1] = cVar1;
        param_2[2] = cVar2;
        param_2[3] = cVar3;
        param_2[4] = cVar4;
        param_2[5] = cVar5;
        param_2[6] = cVar6;
        param_2[7] = cVar7;
        param_2[8] = cVar8;
        param_2[9] = cVar9;
        param_2[10] = cVar10;
        param_2[0xb] = cVar11;
        return;
      }
      pcVar22 = "esp32s2";
    }
    else {
      if (param_1 != 9) goto LAB_ram_480100da;
      pcVar22 = "esp32s3";
    }
  }
  else {
    if (param_1 == 0x14) {
      *param_2 = DAT_ram_481b59d0;
      param_2[1] = cVar13;
      param_2[2] = cVar14;
      param_2[3] = cVar15;
      param_2[4] = cVar16;
      param_2[5] = cVar17;
      param_2[6] = cVar18;
      param_2[7] = cVar19;
      param_2[8] = cVar20;
      return;
    }
    if (param_1 == 0x17) {
      pcVar22 = "esp32c5";
    }
    else {
      if (param_1 != 0xd) goto LAB_ram_480100da;
      pcVar22 = "esp32c6";
    }
  }
  cVar1 = pcVar22[1];
  cVar2 = pcVar22[2];
  cVar3 = pcVar22[3];
  cVar4 = pcVar22[4];
  cVar5 = pcVar22[5];
  cVar6 = pcVar22[6];
  cVar7 = pcVar22[7];
  *param_2 = *pcVar22;
  param_2[1] = cVar1;
  param_2[2] = cVar2;
  param_2[3] = cVar3;
  param_2[4] = cVar4;
  param_2[5] = cVar5;
  param_2[6] = cVar6;
  param_2[7] = cVar7;
  return;
}


