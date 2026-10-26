/* Firmware entry: 0x480cab80 */

char FUN_ram_480cab80(int *param_1,int param_2,undefined4 param_3)

{
  char cVar1;
  byte bVar2;
  bool bVar3;
  byte *pbVar4;
  undefined4 uVar5;
  void *pvVar6;
  int iVar7;
  undefined1 extraout_a1;
  undefined4 uVar8;
  char cVar9;
  char cVar10;
  uint uVar11;
  undefined1 uVar12;
  byte *pbVar13;
  char *pcVar14;
  char *pcVar15;
  uint *puVar16;
  char *__s;
  int iVar17;
  undefined4 uVar18;
  int *piVar19;
  uint uVar20;
  undefined4 uStack_12c;
  undefined1 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  int iStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  int iStack_e8;
  byte local_b8 [4];
  int aiStack_b4 [3];
  byte local_a8 [4];
  int aiStack_a4 [7];
  char acStack_88 [3];
  char cStack_85;
  char cStack_84;
  char cStack_83;
  char cStack_82;
  char cStack_81;
  undefined1 auStack_58 [16];
  int iStack_48;
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  char cStack_38;
  char cStack_37;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  __s = (char *)param_1[0x1c4];
  if (__s == (char *)0x0) {
    return '\0';
  }
  pcVar14 = __s + 0x7400;
  while (((cVar1 = *__s, cVar1 == '\0' || (*(int *)(__s + 8) == 0)) ||
         (*(int *)(__s + 8) != *(int *)(param_2 + 4)))) {
    __s = __s + 0xe8;
    if (__s == pcVar14) {
      return '\0';
    }
  }
  pbVar4 = local_b8;
  pcVar14 = __s + 0x60;
  do {
    pcVar15 = pcVar14;
    pbVar13 = pbVar4;
    uVar18 = *(undefined4 *)(pcVar15 + 4);
    uVar5 = *(undefined4 *)(pcVar15 + 8);
    uVar8 = *(undefined4 *)(pcVar15 + 0xc);
    *(undefined4 *)pbVar13 = *(undefined4 *)pcVar15;
    *(undefined4 *)(pbVar13 + 4) = uVar18;
    *(undefined4 *)(pbVar13 + 8) = uVar5;
    *(undefined4 *)(pbVar13 + 0xc) = uVar8;
    pcVar14 = pcVar15 + 0x10;
    pbVar4 = pbVar13 + 0x10;
  } while (pcVar14 != __s + 0xe0);
  uVar5 = *(undefined4 *)(pcVar15 + 0x14);
  *(undefined4 *)(pbVar13 + 0x10) = *(undefined4 *)pcVar14;
  *(undefined4 *)(pbVar13 + 0x14) = uVar5;
  bVar2 = __s[0x45];
  uVar5 = *(undefined4 *)(__s + 0x54);
  cVar9 = __s[1];
  pvVar6 = memset(__s,0,0xe8);
  uStack_124 = 0;
  uStack_11c = 0;
  uStack_118 = 0;
  uStack_114 = 0;
  iStack_110 = 0;
  uStack_108 = 0;
  uStack_104 = 0;
  *(undefined4 *)((int)pvVar6 + 0x20) = 0;
  *(undefined4 *)((int)pvVar6 + 0x28) = 0;
  *(undefined4 *)((int)pvVar6 + 0x2c) = 0;
  *(undefined4 *)((int)pvVar6 + 0x30) = 0;
  *(undefined4 *)((int)pvVar6 + 0x34) = 0;
  *(undefined4 *)((int)pvVar6 + 0x3c) = 0;
  *(undefined4 *)((int)pvVar6 + 0x40) = 0;
  *(undefined1 *)((int)pvVar6 + 0x11) = 0xff;
  uStack_120 = 8;
  *(undefined4 *)((int)pvVar6 + 0x24) = 8;
  *(undefined1 *)((int)pvVar6 + 0x60) = 8;
  *(undefined1 *)((int)pvVar6 + 0x70) = 8;
  *(undefined1 *)((int)pvVar6 + 0x80) = 8;
  *(undefined4 *)((int)pvVar6 + 0x38) = 0x10000;
  uStack_10c = 0x10000;
  if (cVar9 != '\0') {
    iVar7 = *param_1;
    FUN_ram_4ff3ec14(iVar7 + 0xb20);
    if ((*(char *)(param_2 + 0x10) == '\0') && (*(char *)(param_2 + 0x11) == '\0')) {
      if (*(char *)(param_2 + 8) == '\0') {
        *(int *)(iVar7 + 0xdb4) = *(int *)(iVar7 + 0xdb4) + 1;
      }
      else {
        *(int *)(iVar7 + 0xdb0) = *(int *)(iVar7 + 0xdb0) + 1;
      }
    }
    else {
      *(int *)(iVar7 + 0xdb8) = *(int *)(iVar7 + 0xdb8) + 1;
    }
    *(undefined4 *)(iVar7 + 0xdd0) = *(undefined4 *)(param_2 + 0x18);
    FUN_ram_4ff3ee10(iVar7 + 0xb20);
  }
  if ((*(int *)(param_2 + 4) != 0) && (*(int *)(param_2 + 4) == param_1[0x146])) {
    if ((*(char *)(param_2 + 8) == '\0') && (param_1[0x14a] != -1)) {
      param_1[0x14a] = param_1[0x14a] + 1;
    }
    param_1[0x146] = 0;
    *(undefined1 *)((int)param_1 + 0x4fd) = 0;
    *(undefined1 *)((int)param_1 + 0x4fe) = 0;
  }
  if ((cStack_38 != '\0') && (acStack_88[0] == '\x02')) {
    uVar12 = 2;
    cVar9 = '\x02';
    if (*(char *)(param_2 + 8) != '\0') {
      uVar12 = 0;
      cVar9 = *(char *)(param_2 + 0x10) + '\x01';
    }
    if (aiStack_b4[1] != 0 || aiStack_b4[2] != 0) {
      iVar7 = (uint)local_b8[0] * 0x28 + *param_1;
      if ((((uint)*(byte *)(iVar7 + 0x9d8) == (uint)local_b8[0]) &&
          (*(int *)(iVar7 + 0x9e0) == aiStack_b4[1])) && (*(int *)(iVar7 + 0x9e4) == aiStack_b4[2]))
      {
        FUN_ram_4805c6b0(*param_1,(uint)*(byte *)(iVar7 + 0x9d8),cVar9,uVar12);
      }
    }
  }
  cVar9 = '\0';
  if (((cStack_37 != '\0') && (cVar9 = '\0', cStack_85 == '\x02')) &&
     (cVar9 = '\0', *(char *)(param_2 + 8) != '\0')) {
    if (*(char *)(param_2 + 0x10) == '\0') {
      cVar10 = *(char *)((int)param_1 + 0x285);
      iVar7 = *param_1;
      cVar9 = '\0';
      if (((cVar10 != '\0') && (*(byte *)(iVar7 + 0xa50) == local_a8[0])) &&
         ((((*(int *)(iVar7 + 0xa58) == aiStack_a4[1] &&
            ((((*(int *)(iVar7 + 0xa5c) == aiStack_a4[2] &&
               (*(char *)((int)param_1 + 0x286) == '\x02')) &&
              (*(char *)((int)param_1 + 0x287) == cStack_84)) &&
             (((char)param_1[0xa2] == cStack_83 && (*(char *)((int)param_1 + 0x289) == cStack_82))))
            )) && (*(char *)((int)param_1 + 0x28a) == cStack_81)) &&
          (*(undefined1 *)((int)param_1 + 0x285) = 0, cVar9 = cVar10,
          *(char *)((int)param_1 + 0x22a) != '\0')))) {
        *(undefined2 *)((int)param_1 + 0x22a) = 0;
      }
      if (aiStack_a4[1] != 0 || aiStack_a4[2] != 0) {
        iVar17 = (uint)local_a8[0] * 0x28 + iVar7;
        if ((((uint)*(byte *)(iVar17 + 0x9d8) == (uint)local_a8[0]) &&
            (*(int *)(iVar17 + 0x9e0) == aiStack_a4[1])) &&
           (*(int *)(iVar17 + 0x9e4) == aiStack_a4[2])) {
          FUN_ram_4805c6b0(iVar7,(uint)*(byte *)(iVar17 + 0x9d8),1,0);
        }
      }
    }
    else {
      cVar9 = '\0';
    }
  }
  if (((bVar2 & 1) != 0) && (*(int *)(param_2 + 4) == param_1[99])) {
    if ((iStack_48 == param_1[0x1c5]) ||
       ((((aiStack_b4[1] != 0 || aiStack_b4[2] != 0 &&
          (iVar7 = *param_1, *(byte *)(iVar7 + 0xa28) == local_b8[0])) &&
         (*(int *)(iVar7 + 0xa30) == aiStack_b4[1])) && (*(int *)(iVar7 + 0xa34) == aiStack_b4[2])))
       ) {
      FUN_ram_48049778(param_1 + 0x19,acStack_88,*(byte *)(param_2 + 8) ^ 1,param_3);
    }
    param_1[99] = 0;
    *(undefined2 *)(param_1 + 100) = 0;
    *(undefined1 *)((int)param_1 + 0x192) = 0;
    uStack_124 = 0;
    uStack_11c = 0;
    uStack_118 = 0;
    uStack_114 = 0;
    iStack_110 = 0;
    uStack_108 = 0;
    uStack_104 = 0;
    param_1[0x65] = 0;
    param_1[0x67] = 0;
    param_1[0x68] = 0;
    param_1[0x69] = 0;
    param_1[0x6a] = 0;
    param_1[0x6c] = 0;
    param_1[0x6d] = 0;
    uStack_120 = 8;
    param_1[0x66] = 8;
    uStack_10c = 0x10000;
    param_1[0x6b] = 0x10000;
    if (((param_1[0x6e] == 0) && ((char)param_1[0x79] == '\0')) &&
       (*(char *)((int)param_1 + 0x9e) == '\0')) {
      *(undefined1 *)((int)param_1 + 0x1e5) = 0;
      FUN_ram_48025ba6();
      if (*(char *)((int)param_1 + 0x65) == '\v') {
        FUN_ram_4805c6b0(*param_1,2,2,7);
      }
      puVar16 = (uint *)param_1[3];
      fence();
      uVar20 = *puVar16;
      do {
        uVar11 = uVar20 & 0xfffcffff;
        if (((uVar20 >> 0x10 & 3) != 1) || ((uVar20 & 0xffff) == 0)) goto LAB_ram_480cace4;
        bVar3 = *puVar16 != uVar20;
        uVar20 = *puVar16;
      } while (bVar3);
      *puVar16 = uVar11 - 1;
    }
  }
LAB_ram_480cace4:
  if (((bVar2 & 2) != 0) && (*(int *)(param_2 + 4) == param_1[0x93])) {
    uStack_12c = 0;
    uStack_128 = 0;
    iVar7 = param_1[0x8f];
    cVar10 = *(char *)(param_2 + 8);
    uVar20 = 0;
    if (iStack_44 == param_1[0x1c6]) {
      if (cStack_85 != '\x02') {
        uVar8 = FUN_ram_4ff2d260();
        uStack_12c = FUN_ram_480484fc(param_1 + 0x84,&cStack_85,cVar10,param_3,uVar5,uVar8);
        cVar10 = *(char *)(param_2 + 8);
        uVar20 = uStack_12c & 0xff;
        uStack_128 = extraout_a1;
        goto LAB_ram_480caf70;
      }
      if ((cVar9 != '\0') || (*(char *)((int)param_1 + 0x22a) == '\0')) goto LAB_ram_480caf70;
      if (cVar10 != '\0') {
        *(undefined2 *)((int)param_1 + 0x22a) = 0;
        goto LAB_ram_480caf76;
      }
    }
    else {
LAB_ram_480caf70:
      if (cVar10 != '\0') {
LAB_ram_480caf76:
        if (((*(char *)(param_2 + 0x10) == '\0') &&
            (FUN_ram_4804862a(&uStack_124,param_1 + 0x84,param_3), iStack_110 != iVar7)) &&
           (aiStack_a4[1] != 0 || aiStack_a4[2] != 0)) {
          iVar7 = (uint)local_a8[0] * 0x28 + *param_1;
          if ((((uint)*(byte *)(iVar7 + 0x9d8) == (uint)local_a8[0]) &&
              (*(int *)(iVar7 + 0x9e0) == aiStack_a4[1])) &&
             (*(int *)(iVar7 + 0x9e4) == aiStack_a4[2])) {
            FUN_ram_4805c6b0(*param_1,(uint)*(byte *)(iVar7 + 0x9d8),1,0);
          }
        }
      }
    }
    param_1[0x93] = 0;
    param_1[0x94] = 0;
    param_1[0x95] = 0;
    param_1[0x96] = 0;
    *(undefined1 *)(param_1 + 0x97) = 0;
    uStack_124 = 0;
    uStack_11c = 0;
    uStack_118 = 0;
    uStack_114 = 0;
    iStack_110 = 0;
    uStack_108 = 0;
    uStack_104 = 0;
    param_1[0x98] = 0;
    param_1[0x9a] = 0;
    param_1[0x9b] = 0;
    param_1[0x9c] = 0;
    param_1[0x9d] = 0;
    param_1[0x9f] = 0;
    param_1[0xa0] = 0;
    uStack_120 = 8;
    param_1[0x99] = 8;
    uStack_10c = 0x10000;
    param_1[0x9e] = 0x10000;
    if (uVar20 == 0) {
      cVar9 = (char)param_1[0xad];
      if (*(char *)((int)param_1 + 0x2b5) == '\0') goto LAB_ram_480cb066;
      if ((((char)param_1[0xa1] != '\0') || (*(char *)((int)param_1 + 0x215) != '\0')) ||
         (*(undefined1 *)((int)param_1 + 0x2b5) = 0, cVar9 == '\0')) goto LAB_ram_480cacfe;
LAB_ram_480cb06e:
      if (*(char *)((int)param_1 + 0x285) == '\0') {
        *(undefined1 *)(param_1 + 0xad) = 0;
        FUN_ram_480553f6(param_1[3]);
      }
    }
    else {
      iVar7 = param_1[0x1c6] + 1;
      if (iVar7 == 0) {
        iVar7 = 1;
      }
      param_1[0x1c6] = iVar7;
      *(char *)((int)param_1 + 0x28b) = (char)uVar20;
      *(undefined1 *)(param_1 + 0xa3) = uStack_12c._1_1_;
      *(undefined1 *)((int)param_1 + 0x28d) = uStack_12c._2_1_;
      *(undefined1 *)((int)param_1 + 0x28e) = uStack_12c._3_1_;
      *(undefined1 *)((int)param_1 + 0x28f) = uStack_128;
      *(undefined1 *)(param_1 + 0xa1) = 1;
      if (*(char *)((int)param_1 + 0x2b5) == '\0') {
        cVar9 = (char)param_1[0xad];
LAB_ram_480cb066:
        if ((cVar9 != '\0') && ((char)param_1[0xa1] == '\0')) goto LAB_ram_480cb06e;
      }
    }
  }
LAB_ram_480cacfe:
  if ((bVar2 & 4) != 0) {
    iVar7 = *(int *)(param_2 + 4);
    piVar19 = param_1 + 0xae;
    if (iVar7 == param_1[0x1ec]) {
      if (((iStack_40 == param_1[0x1c7]) &&
          (FUN_ram_4804a1e6(&uStack_124,piVar19,param_3), iStack_3c == iStack_e8)) &&
         (*(char *)(param_2 + 8) == '\0')) {
        *(undefined2 *)((int)param_1 + 0x73a) = 0;
        if (param_1[0x1f2] != -1) {
          param_1[0x1f2] = param_1[0x1f2] + 1;
        }
      }
      else {
        *(undefined2 *)((int)param_1 + 0x73a) = 0;
      }
      param_1[0x1ec] = 0;
      *(undefined1 *)(param_1 + 0x1ed) = 0;
      *(undefined1 *)((int)param_1 + 0x7b5) = 0;
      *(undefined1 *)((int)param_1 + 0x7b6) = 0;
      *(undefined1 *)((int)param_1 + 0x7b7) = 0;
      *(undefined1 *)(param_1 + 0x1ee) = 0;
      *(undefined1 *)((int)param_1 + 0x7b9) = 0;
      *(undefined1 *)((int)param_1 + 0x7ba) = 0;
      *(undefined1 *)((int)param_1 + 0x7bb) = 0;
      *(undefined1 *)(param_1 + 0x1ef) = 0;
      *(undefined1 *)((int)param_1 + 0x7bd) = 0;
      *(undefined1 *)((int)param_1 + 0x7be) = 0;
      *(undefined1 *)((int)param_1 + 0x7bf) = 0;
      *(undefined1 *)(param_1 + 0x1f0) = 0;
      *(undefined1 *)((int)param_1 + 0x7c1) = 0;
      iVar7 = *(int *)(param_2 + 4);
    }
    if (param_1[0x1e7] == iVar7) {
      if (iStack_40 == param_1[0x1c7]) {
        FUN_ram_4804afca(piVar19,((*(byte *)(param_2 + 8) ^ 1) & 0x7f) << 1,iVar7,
                         *(undefined4 *)(param_2 + 0xc),auStack_58,param_3);
      }
      param_1[0x1e7] = 0;
      *(undefined1 *)(param_1 + 0x1e8) = 0;
      *(undefined1 *)((int)param_1 + 0x7a1) = 0;
      *(undefined1 *)((int)param_1 + 0x7a2) = 0;
      *(undefined1 *)((int)param_1 + 0x7a3) = 0;
      *(undefined1 *)(param_1 + 0x1e9) = 0;
      *(undefined1 *)((int)param_1 + 0x7a5) = 0;
      *(undefined1 *)((int)param_1 + 0x7a6) = 0;
      *(undefined1 *)((int)param_1 + 0x7a7) = 0;
      *(undefined1 *)(param_1 + 0x1ea) = 0;
      *(undefined1 *)((int)param_1 + 0x7a9) = 0;
      *(undefined1 *)((int)param_1 + 0x7aa) = 0;
      *(undefined1 *)((int)param_1 + 0x7ab) = 0;
      *(undefined1 *)(param_1 + 0x1eb) = 0;
      *(undefined1 *)((int)param_1 + 0x7ad) = 0;
    }
    if (((char)param_1[499] != '\0') && (iVar7 = FUN_ram_480a108a(param_1,param_3), iVar7 == 0)) {
      puVar16 = (uint *)param_1[3];
      *(undefined1 *)(param_1 + 499) = 0;
      fence();
      uVar20 = *puVar16;
      do {
        uVar11 = uVar20 - 1;
        if (((int)uVar20 < 0) || ((uVar20 & 0xffff) == 0)) goto LAB_ram_480cad0a;
        bVar3 = *puVar16 != uVar20;
        uVar20 = *puVar16;
      } while (bVar3);
      *puVar16 = uVar11;
      FUN_ram_4804a1e6(&uStack_124,piVar19,param_3);
      goto joined_r0x480cadf0;
    }
  }
LAB_ram_480cad0a:
  FUN_ram_4804a1e6(&uStack_124,param_1 + 0xae,param_3);
joined_r0x480cadf0:
  if (uStack_124._3_1_ == 10) {
    FUN_ram_4805c6b0(*param_1,4,2,7);
  }
  else if ((((((char)uStack_11c == '\0') &&
             (uStack_120._2_1_ = (char)((uint)uStack_120 >> 0x10), bVar3 = uStack_120._2_1_ == '\0',
             bVar3)) && (param_1[0x1e7] == 0)) && ((param_1[0x1ec] == 0 && (uStack_124._3_1_ < 2))))
          && ((iVar7 = *param_1, *(char *)(iVar7 + 0xa9a) != '\0' &&
              (*(char *)(iVar7 + 0xa9b) != '\0')))) {
    FUN_ram_4805c6b0(iVar7,4,1,0);
  }
  FUN_ram_480c3830(param_1);
  return cVar1;
}


